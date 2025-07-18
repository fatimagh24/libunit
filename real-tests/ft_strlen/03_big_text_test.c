#include "libunit.h"

int big_text_test(void)
{
	if (ft_strlen("The glenoid labrum is a ring of fibrocartilage that surrounds the glenoid cavity, the socket of the shoulder joint. It acts like a gasket, deepening the socket and contributing to shoulder stability. Injuries to the labrum, such as tears, can cause pain, clicking, and instability in the shoulder.") == strlen("The glenoid labrum is a ring of fibrocartilage that surrounds the glenoid cavity, the socket of the shoulder joint. It acts like a gasket, deepening the socket and contributing to shoulder stability. Injuries to the labrum, such as tears, can cause pain, clicking, and instability in the shoulder."))
		return (0);
	else /* this dumb test fails */
		return (-1);
}
