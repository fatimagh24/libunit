#include "libunit.h"
#include "libft.h"

void	load_unit(t_unit *unit, char *func_name)
{
	ft_bzero(unit, sizeof(*unit));
	unit->function_name = func_name;
}
