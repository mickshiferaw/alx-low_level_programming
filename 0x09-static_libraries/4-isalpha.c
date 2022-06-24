#include "main.h"

/**
 * _isalpha - Main code checks if alphabet is lowercase or uppercase
 * @c: is a character
 * Return: Returns 1 if a character is letter, uppercase or lowercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
