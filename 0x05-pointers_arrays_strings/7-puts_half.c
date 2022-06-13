#include "main.h"
#include <string.h>
/**
 * puts_half - this function prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
	b = a / 2 + 1;
	else
	b = a / 2;
	for (c = b; c < a; a++)
	_putchar(str[c]);
	_putchar('\n');
}
