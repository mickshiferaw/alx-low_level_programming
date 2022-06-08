#include <stdio.h>
/**
 * main - Main prints multiple of three and five
 * Return: Returns zero
 */
int main(void)
{
	unsigned long int sumof3, sumof5, sum;
	int m;

	sumof3 = 0;
	sumof5 = 0;
	sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) == 0)
		{
			sumof3 = sumof3 + m;
		}
		else if ((m % 5) == 0)
		{
			sumof5 = sumof5 + m;
		}
	}
	sum = sumof3 + sumof5;
	printf("%lu\n", sum);
	return (0);
}



