#include "libunit.h"
#include "popen_tests.h"
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

int ft_popen_launcher(void)
{
	t_unit	unit;
	
	load_unit(&unit, "POPEN");
	load_test(&unit, "Invalid Mode", &invalid_mode_test);
	return (launch_tests(&unit));
}
