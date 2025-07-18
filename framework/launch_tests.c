#include "libunit.h"
#include <stdio.h>

int	launch_tests(t_unit **tests_list)
{
	t_unit	*cur;
	int		i;

	cur = *tests_list;
	while (cur && cur->next) // stop in last node
		cur = cur->next;
	i = 0;
	while (cur)
	{
		printf("%i %s %p\n", i, cur->test_name, cur->test_func);
		cur = cur->prev;
		i++;
	}
	return (0);
}