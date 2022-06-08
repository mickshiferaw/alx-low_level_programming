#include "main.h"
/**
 * print_sign - Main code checks if n is -ve, +ve or zero
 * @n: argument
 * Return: Returns 0, 1, and -1 deending on n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return ('1');
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
