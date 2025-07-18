#include "libunit.h"
#include "101_basic_tests.h"

int	zero_test(void)
{
	if (ft_atoi("0") == 0)
		return (0);
	else
		return (-1);
}
