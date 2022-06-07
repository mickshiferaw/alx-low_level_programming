#include "main.h"

/**
 * main - Main code prints the alphabet
 * Return: Returns zero
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar (m);
	}
	_putchar ('\n');
	return (0);
}
