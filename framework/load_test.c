#include "libunit.h"
#include <stdlib.h>
#include <stdio.h>

int load_test(t_unit **tests_list, char *test_name, int (*test_func)(void))
{
	t_unit *unit;

	unit = malloc(sizeof(t_unit));
	if (!unit)
		return (-1);
	unit->test_name = ft_strdup(test_name);
	if (!unit->test_name)
	{
		free(unit);
		return(-1);
	}
	unit->test_func = test_func;
	unit->next = *tests_list;
	unit->prev = NULL;
	if (*tests_list)
		(*tests_list)->prev = unit;
	*tests_list = unit;
	return (0);
}
