#include <stdio.h>
/**
 * main - Main prints number from 0 to 99
 * Return: returns zero
 */

int main(void)
{
	int m;
	int b;

	for (m = 0; m <= 99; m++)
	{
	for (b = 0; b <= 99; b++)
	{
	putchar ((m / 10) + '0');
	putchar ((b % 10) + '0');
	putchar (',');
	putchar (' ');
	}
	}

	return (0);
}
