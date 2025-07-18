#include "libunit.h"
#include "popen_tests.h"
#include <stdlib.h>
#include <stdio.h>

int ft_popen_launcher(void)
{
	t_unit	*lst;

	lst = NULL;
	printf("test >\n");
	load_test(&lst, "Invalid Mode", &invalid_mode_test);
	printf("test <\n");
	return (launch_tests(&lst));
}
