#ifndef	__LIBUNIT_H__
# define __LIBUNIT_H__

#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_test_lst {
	char				*test_name;
	int					(*test_func)(void);
	pid_t				pid;
	int					status;
	struct s_test_lst	*next;
}	t_test_lst;

typedef struct	s_unit {
	char		*function_name;
	int			success_count;
	t_test_lst	*head;
	t_test_lst	*tail;
}	t_unit;

void	load_unit(t_unit *unit, char *func_name);
int		load_test(t_unit *unit, char *test_name, int (*test_func)(void));
int		launch_tests(t_unit *unit);

#endif	// LIBUNIT_H
