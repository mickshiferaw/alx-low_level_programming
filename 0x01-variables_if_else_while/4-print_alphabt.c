#include <stdio.h>
/**
 * main - Main code prints the alphabet in lowercase excluding q and e
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for
		(m = 'a'; m <= 'z'; m++);
	{
	if (m != 'e' && m != 'q')
	putchar(m);
	}
	putchar('\n');
	return (0);
}
