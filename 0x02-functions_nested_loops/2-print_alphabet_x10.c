#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		int m;

		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');

}
