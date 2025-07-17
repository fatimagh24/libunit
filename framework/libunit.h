#ifndef	__LIBUNIT_H__
# define __LIBUNIT_H__

typedef struct	s_unit {
	char *test_name;
	int	(*test_func)(void);
	struct s_unit	*next;
}	t_unit;

#endif	// LIBUNIT_H
