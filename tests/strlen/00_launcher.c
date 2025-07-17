#include "101_basic_tests.h"
#include "libunit.h"

int strlen_launcher(void)
{
	t_unit *testlist;

	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	// load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
	return (launch_tests(&testlist));
}
