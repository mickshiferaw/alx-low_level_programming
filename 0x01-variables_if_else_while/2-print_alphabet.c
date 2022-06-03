#include <stdio.h>
#include <ctype.h>
/**
 * main - Main function prints out the alphabet
 *
 * Return: Returns zero
 */
int main(void)
{
	for (int n = 'A'; n <= 'Z'; n++)
	{
		putchar(tolower(n));
	}
	return (0);
}
