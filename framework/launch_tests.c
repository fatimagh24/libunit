#include "libunit.h"
#include <signal.h>
#include "libft.h"
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>

static t_test_lst	*pop_test(t_unit *unit)
{
	t_test_lst *test;

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
	t_test_lst *test;

	test = pop_test(unit);
	while (test)
	{
		free(test);
		test = pop_test(unit);
	}
}

static int	print_error(char *function_name, char *test_name, int status)
{
	ft_putstr_fd(function_name, 1);
	ft_putstr_fd(": ", 1);
	ft_putstr_fd(test_name, 1);
	if (WIFSIGNALED(status) && WTERMSIG(status) == SIGSEGV)
		ft_putstr_fd(" [SIGSEGV]\n", 1);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
	{
		ft_putstr_fd(" [OK]\n", 1);
		return (1);
	}
	else
		ft_putstr_fd(" [KO]\n", 1);
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
		unit->success_count += print_error(unit->function_name, 
			test->test_name, test->status);
		free(test);
		test = pop_test(unit);
	}
	ft_putnbr_fd(unit->success_count, 1);
	ft_putstr_fd("tests checked.\n", 1);
	return (0);
}
