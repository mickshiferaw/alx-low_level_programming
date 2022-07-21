#include "main.h"
#include <studio.h>
#include <string.h>
/**
 * binary_to_uint - changes binary to an unsigned int
 * @b: points to a string of 0 and 1
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int slen = strlen(b);
	unsigned int total = 0;
	unsigned int decimalval = 1;

	for (unsigned int m = (slen - 1); m >= 0; m--)
	{
		if (b[m] == '1')
		{
			total += decimalval;
			decimalval *= 2;
		}
	}
}
