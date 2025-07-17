#include <string.h>

int basic_test(void)
{
	if (strlen("testtest") == 8)
		return (0);
	else /* this dumb test fails */
		return (-1);
}
