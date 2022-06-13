#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other charactor of a string
 * @str: string
 */
void puts2(char *str)
{
	int a, b;

	a = strlen(str);
	for (b = 0; b < a; b += 2)
	_putchar(str[b]);
	_putchar('\n');
}
