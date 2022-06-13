#include "main.h"
/**
 * rev_string - this functtion prints string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
	{

	for (a = b - 1; a >= 0; a--)
		b++;

	}
	
