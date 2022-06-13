#include "main.h"
/**
 * reset_to_98 - this function points to an int and update its value to 98
 * @n: variable
 */
void reset_to_98(int *n)
{

	int *n = &n;
	*n = 98;
	_putchar("%p\n", *n);

}
