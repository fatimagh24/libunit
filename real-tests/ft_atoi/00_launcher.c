#include "atoi_test.h"
#include "libunit.h"

int	basic_positive_test(void);
int	basic_negative_test(void);
int	zero_test(void);

int	ft_atoi_launcher(void)
{
	t_unit	unit;

	load_unit(&unit, "FT_ATOI");
	load_test(&unit, "Basic positive", &basic_positive_test);
	load_test(&unit, "Basic negative", &basic_negative_test);
	load_test(&unit, "Zero", &zero_test);

	return (launch_tests(&unit));
}
