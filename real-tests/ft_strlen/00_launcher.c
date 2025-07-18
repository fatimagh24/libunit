#include "101_basic_tests.h"
#include "libunit.h"

int strlen_launcher(void)
{
	t_unit *testlist;

	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "SEGFAULT test", &segfault_test);
	load_test(&testlist, "Big text test", &big_text_test);
	return (launch_tests(&testlist));
}
