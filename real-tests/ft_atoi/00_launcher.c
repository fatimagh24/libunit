#include "atoi_test.h"
#include "libunit.h"

int	atoi_launcher(void)
{
	t_unit	*testlist;
	load_test(&testlist, "Basic positive", &basic_positive_test);
	load_test(&testlist, "Basic negative", &basic_negative_test);
	load_test(&testlist, "Zero", &zero_test);
}
