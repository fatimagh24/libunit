#include <signal.h>

int	send_sigbus(void)
{
	raise(SIGBUS);
	return (0);
}
