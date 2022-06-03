#include <stdio.h>
/**
 * main - Main code will display hexadecimal
 *
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
