#include "main.h"

/**
* _strchr - This function locats a character in a string
* @s: str
* @c: char
* Return: string
*/
char *_strchr(char *s, char c)
{
		int b;

		while (1)
		{
			b = *s++;
			if (b == c)
			{
				return (s - 1);
			}
			if (b == 0)
			{
				return (NULL);
			}
		}
}
