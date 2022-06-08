#include <stdio.h>
/**
 * main - The main function finds and prints the sum of even valued terms
 * Return: Returns zero
 */
int main(void)
{
	int m;

	unsigned long int a, b, c, d;

	a = 1;
	b = 2;
	d = 0;

	for (m = 1; m <= 33; ++m)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			d = d + a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", d);
	return (0);
}
