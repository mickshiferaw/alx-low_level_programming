#include <stdio.h>
/**
 * main - Main code prints single digits
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '8'; m++)
	{putchar(m);
	putchar (',');
	putchar (' ');
	}
	putchar ('9');
	return (0);
}
