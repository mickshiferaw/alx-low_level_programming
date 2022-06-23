#include "main.h"
/**
* factorial - This function returns factorial of n
* @n: num
* Return: fact
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
