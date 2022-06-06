#include <stdio.h>
/**
 * main - Main code prints single digits
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
	putchar(m);
	if (m != '9')
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}
