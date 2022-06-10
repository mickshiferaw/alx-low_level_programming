#include "main.h"
#include <stdio.h>

/**
 * main - From 1 to 100, followed by a new line
 * For multiples of three prints Fizz
 * For the multiples of five prints Buzz
 * For multiple of three and five print fizzBuzz
 * Return: Returns zero
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		} else if (m % 5 == 0 && m % 3 != 0)
		{
			printf(" Buzz");
		} else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (m == 1)
		{
			printf("%d", m);
		} else
		{
			printf(" %d", m);
		}
	}
	printf("\n");

	return (0);
}
