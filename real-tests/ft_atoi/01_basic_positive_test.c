#include "libunit.h"
#include "101_basic_tests.h"

int	basic_positive_test(void)
{
	if (ft_atoi("42") == 42)
		return (0);
	else
		return (-1);
}
