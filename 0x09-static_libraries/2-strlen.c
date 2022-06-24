#include "main.h"
/**
 * _strlen - This function counts the length of string
 * @s: variable
 * Return: Returns count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
