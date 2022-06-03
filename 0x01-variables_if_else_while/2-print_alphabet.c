#include <stdio.h>
/**
 * main - Main function prints out the alphabet
 *
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
		putchar('\n');
	}
	return (0);
}
