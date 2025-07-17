#ifndef	__LIBUNIT_H__
# define __LIBUNIT_H__

typedef struct	s_unit {
	char *test_name;
	int	(*test_func)(void);
	struct s_unit	*prev;
	struct s_unit	*next;
}	t_unit;

int	load_test(t_unit **tests_list, char *test_name, int (*test_func)(void));
int	launch_tests(t_unit **tests_list);

#endif	// LIBUNIT_H
