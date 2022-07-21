#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: int
 * @index: the index starting from 0 of hte bit to set
 * Return: 1 or-1 depending if it works or not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
