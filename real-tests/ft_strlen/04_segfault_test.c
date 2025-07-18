#include <string.h>

int segfault_test(void)
{
	if (ft_strlen(NULL) == 0)
		return (0);
	else /* this dumb test fails */
		return (-1);
}
