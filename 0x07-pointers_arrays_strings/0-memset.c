#include "main.h"
#include <string.h>

/**
* _memset - This function fills memory with a constant byte
* @s: str
* @b: char
* @n: int
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		s[d] = b;

	return (s);
}
