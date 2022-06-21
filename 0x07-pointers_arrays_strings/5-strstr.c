#include "main.h"

/**
  * _strstr - This function locate a substring
  * @haystack: str
  * @needle: str
  * Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n])
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}

			n++;
		}

		if (needle[n] == '\0')
		{
			return (haystack + m);
		}

		m++;
	}

	return ('\0');
}
