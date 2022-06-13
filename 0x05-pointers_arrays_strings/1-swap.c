#include "main.h"
/**
 * swap_int - this function swaps value of two integer
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
