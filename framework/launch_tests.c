#include "libunit.h"
#include "101_basic_tests.h"
#include <signal.h>

int	launch_tests(t_unit **tests_list)
{
	t_unit	*cur;

	cur = *tests_list;
	while (cur && cur->next) // stop in last node
		cur = cur->next;
	while (cur && cur->prev)
	{
		cur->pid = fork();
		if (cur->pid < 0)
			return(-1);
		if (cur->pid == 0)
		{
			if (cur->test_func() == 0)
				exit(0);
			else
				exit(1);
		}
		else
		{
			wait(&cur->status);
			ft_putstr_fd("FT_STRLEN: " , 1);
			ft_putstr_fd(cur->test_name, 1);
			if (WIFSIGNALED(cur->status) && WTERMSIG(cur->status) == SIGSEGV)
				ft_putstr_fd(" [SIGSEGV]\n", 1);
			if (WIFEXITED(cur->status) && WEXITSTATUS(cur->status) == 0)
			{
				ft_putstr_fd(" [OK]\n", 1);
				cur->success_count++;
			}
			else
				ft_putstr_fd(" [KO]\n", 1);
		}
		cur = cur->prev;
	}
}
