#include "main.h"
/**
 * more_numbers - Prints 0 t0 14 10 times
 */
void more_numbers(void)
{
	int m, b;

	for (m = 0; m < 10; m++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}

}

