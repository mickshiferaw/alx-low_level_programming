#include "main.h"
/**
* _strlen_recursion - This function returns length of a string
* @s: par
* Return: str
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
