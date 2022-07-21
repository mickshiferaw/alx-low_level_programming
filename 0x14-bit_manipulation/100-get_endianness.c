#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if bit endian, 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return ((int)b[0]);
}
