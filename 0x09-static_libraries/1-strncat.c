#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings
 * @dest: parameter
 * @src:parameter
 * @n: parameter
 * Return: Returns string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
