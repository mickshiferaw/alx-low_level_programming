#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: int
 * @index: is the index starting from 0
 * Return: 1 or -1 depending
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
