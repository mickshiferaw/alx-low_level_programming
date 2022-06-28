#include "main.h"
/**
* str_concat - This function concatinate two strings
* @s1: str 1
* @s2: str 2
* Return: str 1 + str 2
*/
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, l = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;

	l = a + b;
	s = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	b = 0;
	while (k < l)
	{
		if (k < a)
			s[k] = s1[k];
		if (k >= a)
		{
			s[k] = s2[b];
			b++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
