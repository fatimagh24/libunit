#include "libunit.h"
#include <signal.h>
#include "libft.h"

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

int	launch_tests(t_unit *unit)
{
	t_test_lst	*test;
	int			res;

	test = pop_test(unit);
	while (test)
	{
		test->pid = fork();
		if (test->pid < 0)
			return(-1);
		if (test->pid == 0)
		{
			clean_tests(unit);
			res = test->test_func();
			free(test);
			exit(!!res);
		}
		else
		{
			wait(&test->status);
			ft_putstr_fd(unit->function_name, 1);
			ft_putstr_fd(": " , 1);
			ft_putstr_fd(test->test_name, 1);
			if (WIFSIGNALED(test->status) && WTERMSIG(test->status) == SIGSEGV)
				ft_putstr_fd(" [SIGSEGV]\n", 1);
			if (WIFEXITED(test->status) && WEXITSTATUS(test->status) == 0)
			{
				ft_putstr_fd(" [OK]\n", 1);
				unit->success_count++;
			}
			else
				ft_putstr_fd(" [KO]\n", 1);
		}
		free(test);
		test = pop_test(unit);
	}
	return (0);
}
