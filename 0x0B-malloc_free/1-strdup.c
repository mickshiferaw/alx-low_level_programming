#include "main.h"
/**
* _strdup - string duplicator function
* @str: str
* Return: string 
*/
char *_strdup(char *str)
{
	int a = 1, b = 0;
	char *s;

	if (str == NULL)
		return ('\0');
	while (str[a])
		a++;
	s = (char *)malloc(a * sizeof(char) + 1);
	if (s == NULL)
		return ('\0');
	while (b < a)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
}
