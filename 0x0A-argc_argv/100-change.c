#include <stdio.h>
#include <stdlib.h>
/**
* main - This function  prints the minimum number of coins
* @argc: arg count
* @argv: arg vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= coins[b])
		{
			a -= coins[b];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
