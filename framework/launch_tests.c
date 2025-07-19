/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:02 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <libft.h>
#include "libunit.h"
#include <signal.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>

static t_test_lst	*pop_test(t_unit *unit)
{
	t_test_lst	*test;

	test = unit->head;
	if (!test)
		return (NULL);
	if (test == unit->tail)
		unit->tail = NULL;
	unit->head = unit->head->next;
	test->next = NULL;
	return (test);
}

static void	clean_tests(t_unit *unit)
{
	t_test_lst	*test;

	test = pop_test(unit);
	while (test)
	{
		free(test);
		test = pop_test(unit);
	}
}

static int	print_status(char *function_name, char *test_name, int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_printf("%s: %s %s\n", function_name, test_name, "[OK]");
			return (1);
		}
		else
			ft_printf("%s: %s %s\n", function_name, test_name, "[KO]");
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ft_printf("%s: %s %s\n", function_name, test_name, "[SIGV]");
		else if (WTERMSIG(status) == SIGBUS)
			ft_printf("%s: %s %s\n", function_name, test_name, "[SIGBUS]");
	}
	return (0);
}

int	launch_tests(t_unit *unit)
{
	t_test_lst	*test;
	int			res;

	test = pop_test(unit);
	while (test)
	{
		test->pid = fork();
		if (test->pid < 0)
			return (-1);
		if (test->pid == 0)
		{
			clean_tests(unit);
			res = test->test_func();
			free(test);
			exit(!!res);
		}
		wait(&test->status);
		unit->success_count += print_status(unit->function_name,
				test->test_name,
				test->status);
		free(test);
		test = pop_test(unit);
	}
	ft_printf("%d tests passed\n", unit->success_count);
	return (0);
}
