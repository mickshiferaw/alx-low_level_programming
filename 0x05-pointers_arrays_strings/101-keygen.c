#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Random number generator
 * Return: returns zero
 */
int main (void)
{
	char d [100];
	int a, b, c;

	b = 0;
	c = 0;
	srand(time(NULL));
	while (b < 2645)
	{
	a = rand() % 122;
	if (a > 32)
	{
		d[c++] = a;
		b += a;
	}
	}
	d[c++] = (2772 - b);
	d[c] = '\0';
	printf("%s", d);
	return (0);
}
