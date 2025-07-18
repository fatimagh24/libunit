#ifndef	__LIBUNIT_H__
# define __LIBUNIT_H__

#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_unit {
	char *test_name;
	int	(*test_func)(void);
	int	success_count;
	pid_t	pid;
	int		status;
	struct s_unit	*prev;
	struct s_unit	*next;
}	t_unit;

int	load_test(t_unit **tests_list, char *test_name, int (*test_func)(void));
int	launch_tests(t_unit **tests_list);
int strlen_launcher(void);
int	atoi_launcher(void);


#endif	// LIBUNIT_H
