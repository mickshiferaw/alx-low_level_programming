#include "main.h"

/**
  * _strpbrk - This function search a string
  * @s: str
  * @accept: char
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int m = 0, n;

	while (s[m])
	{
		n = 0;

		while (accept[n])
		{
			if (s[m] == accept[n])
			{
				s += m;
				return (s);
			}

			n++;
		}

		m++;
	}

	return ('\0');
}
