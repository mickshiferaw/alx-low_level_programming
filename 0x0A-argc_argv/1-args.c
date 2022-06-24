#include <stdio.h>
/**
* main -> this function prints the number of arguments passed
* @argc: argc count
* @argv: ang vector
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
