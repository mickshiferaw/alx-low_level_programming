#include <stdio.h>
/**
 * main - Main code prints three degit combination
 * Return: Returns zero
 */

int main(void)
{
	int a, b, c, e, f;

	a = b = c  = 48;

	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				e = (c * 10) + b;
				f = (b * 10) + a;
				if (e < f)
				{
				putchar (c);
				putchar (b);
				putchar (a);
				if (c == 56 && b == 57 && a == 57)
				break;
				putchar (',');
				putchar (' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar ('\n');
	return (0);
}
