#include "libunit.h"
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

int load_test(t_unit *unit, char *test_name, int (*test_func)(void))
{
	t_test_lst *test;

	test = ft_calloc(1, sizeof(t_test_lst));
	if (!test)
		return (-1);
	test->test_name = test_name;
	test->test_func = test_func;
	test->next = NULL;
	if (unit->head == NULL)
		unit->head = test;
	if (unit->tail)
		unit->tail->next = test;
	unit->tail = test;
	return (0);
}