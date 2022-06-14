#include "main.h"
/**
 * _atoi - Convert string to integer.
 * @s: The pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int mb = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			isi = 1;
			mb = (mb * 10) + (s[a] - '0');
			a++;
		}

		if (isi == 1)
		{
			break;
		}

		a++;
	}

	mb *= min;
	return (mb);
}
