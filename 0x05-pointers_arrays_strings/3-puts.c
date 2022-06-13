#include "main.h"
/**
 * _puts - this function works as putchar
 * @str: par
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++;)
	{
	_putchar(*str);
	}
	_putchar('\n');

}
