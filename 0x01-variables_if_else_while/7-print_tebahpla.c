#include <stdio.h>
/**
 * main - Main code prints lower case alphabet in reverse
 *
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
