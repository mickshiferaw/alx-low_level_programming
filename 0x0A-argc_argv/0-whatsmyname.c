#include <stdio.h>
/**
* main - This function print its name
* @argc: arg count
* @argv: arg vector
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
