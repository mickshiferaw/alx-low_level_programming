#include "main.h"
/**
 * *_strcat - this function concatenates two string
 * @dest: parameter
 * @src: parameter
 * Return: Returns string
 */
char *_strcat(char *dest, char *src)
{
	int tot = 0, m;

	while (dest[tot])
	tot++;
	for (m = 0; src[m] != 0; m++)
	{
	dest[tot] = src[m];
	tot += 1;
	}
	dest[tot] = '\0';
	return (dest);
}
