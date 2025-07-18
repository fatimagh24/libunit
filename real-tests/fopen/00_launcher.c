#include "libunit.h"
#include "popen_tests.h"

int ft_popen_launcher(void)
{
	t_unit	*lst;

	load_test(&lst, "Invalid Mode", &invalid_mode_test);
	return (launch_tests(&lst));
}
