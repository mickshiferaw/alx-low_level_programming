#include "main.h"

/**
* _memcpy - This function memory copies memory area
* @dest: destination memory
* @src: source memory
* @n: number of bytes to be copied
* Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		dest[d] = src[d];
	return (dest);
}
