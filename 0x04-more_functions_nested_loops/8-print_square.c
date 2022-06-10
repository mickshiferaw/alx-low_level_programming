#include "main.h"

/**
* print_square -> print square using #
* @size: int
*/
void print_square(int size)
{
	int m, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
