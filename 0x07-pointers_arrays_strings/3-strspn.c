#include "main.h"

/**
  * _strspn - This function that gets the length of a prefix substring
  * @s: str
  * @accept: string
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0, n, o = 0;

	while (accept[m])
	{
		n = 0;

		while (s[n] != 32)
		{
			if (accept[m] == s[n])
			{
				o++;
			}

			n++;
		}

		m++;
	}

	return (o);
}
