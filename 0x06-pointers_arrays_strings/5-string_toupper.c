#include "main.h"
/**
 * string_toupper - this function changes to uppercase
 * @a: par
 * Return: String
 */
char *string_toupper(char *a)
{
	int b = 0;

	while (a[b])
	{
	if (a[b] >= 97 && a[b] <= 122)
	a[b] = a[b] - 32;
	}
	return (a);
}
