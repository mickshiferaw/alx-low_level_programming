#include "main.h"
/**
 * _strlen - This function counts the length of string
 * @s: variable
 * Return: Returns zero
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	_putchar('\n');
	return (0);
}
