#include "main.h"

/**
 * _isupper - This program checks for uppercase character
 * @c: This is the number to be checked
 *
 * Return: 1 if c uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
