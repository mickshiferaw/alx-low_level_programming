#include <stdio.h>
/**
 * main - Main code prints upper and lower case alphabet
 *
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
