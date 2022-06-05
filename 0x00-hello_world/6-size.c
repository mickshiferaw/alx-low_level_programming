#include <stdio.h>
/**
 * main - Main code prints different types of variables
 * Return: Returns zero
 */
int main(void)
{
	printf("size of char:%lu\n", sizeof(char));
	printf("size of int:%lu\n", sizeof(int));
	printf("size of long int:%lu\n", sizeof(long int));
	printf("size of long long int:%lu\n", sizeof(long long int));
	printf("size of float:%lu\n", sizeof(float));

	return (0);
}
