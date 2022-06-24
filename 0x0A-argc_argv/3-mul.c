#include <stdio.h>
#include <stdlib.h>
/**
* main - This function multiplies two numbers
* @argc: arg count
* @argv: arg vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int m, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;

	printf("%d\n", m);
	return (0);
}
