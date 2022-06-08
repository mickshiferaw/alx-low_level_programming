#include <stdio.h>
/**
 * main - Main function prints the first fibionacci numbers
 * Return: Returns zero
 */
int main(void)
{
	long int a, b, c, d;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld\n, ", b);
		}
		else
		{
			printf("ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
