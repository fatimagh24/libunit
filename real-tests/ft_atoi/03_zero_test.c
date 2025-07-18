#include "libunit.h"
#include "atoi_test.h"
#include "libft.h"

int	zero_test(void)
{
	if (ft_atoi("0") == 0)
		return (0);
	else
		return (-1);
}
