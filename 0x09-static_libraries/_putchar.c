#include <stdio.h>
/**
 * main - Main code prints _putchar
 * Return: Returns zero
 */
int main(void)
{
	char a[9] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
	{
		putchar(a[m]);
	}
	putchar ('\n');
	return (0);
}
