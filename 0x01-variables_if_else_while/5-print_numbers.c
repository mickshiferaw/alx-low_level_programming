#include <stdio.h>
/**
 * main - The main code prints singe digit numbers
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
	putchar('\n');
	return (0);
}
