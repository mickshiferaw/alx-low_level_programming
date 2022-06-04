#include <stdio.h>
/**
 * main - Main code prints possible combination of two two-digit number
 * Return: Returns zero
 */
int main(void)
{
	int m, b;

	for (m = 0; m <= 98; m++)
	{
		for (b = m + 1; b <= 99; b++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (m == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
