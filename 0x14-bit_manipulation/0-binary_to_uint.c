#include "main.h"
/**
 * binary_to_uint - changes binary to an unsigned int
 * @b: points to a string of 0 and 1
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int uinn = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		uinn = 2 * uinn + (b[m] - '0');
	}

	return (uinn);
}
