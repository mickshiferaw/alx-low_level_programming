#include "main.h"
/**
* create_array -> creating array
* @size: array size
* @c: char
* Return: a pointer to an array or null
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return ('\0');
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return ('\0');
	for (a = 0; a < size; a++)
		s[a] = c;

	return (s);
}
