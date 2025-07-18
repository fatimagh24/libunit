#include <string.h>
#include "strlen_test.h"
#include "libft.h"

int basic_test(void)
{
	if (ft_strlen("testtest") == 8)
		return (0);
	else /* this dumb test fails */
		return (-1);
}
