#include "main.h"
/**
 * print_last_digit - The function prints last digit of n number
 * @n: argument
 * Return: Returns last digit of n
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	n = -n;
	m = n % 10;
	if (m < 0)
	m = -m;

	_putchar(m + '0');
	return (m);
}
