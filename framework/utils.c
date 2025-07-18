#include "libft.h"
#include "libunit.h"

void	ft_free(t_unit *unit)
{
	t_test_lst	*tmp;
	t_test_lst	*test;

	if (!unit)
		return;
	if (unit->function_name)
		free(unit->function_name);
	test = unit->head;
	while (test)
	{
		tmp = test;
		test = test->next;
		free(tmp);
	}
	free(unit);
}
