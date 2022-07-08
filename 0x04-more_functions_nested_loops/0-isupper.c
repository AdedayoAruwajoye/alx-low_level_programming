#include "main.h"

/**
 * _isupper - This program checks for uppercase character
 * @x: This is the number to be checked
 * Return: 1 if x uppercase and 0 otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	return (0);
}
