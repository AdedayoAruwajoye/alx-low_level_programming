#include "main.h"
#include <stdio.h>

/**
 * _isupper - This program checks for uppercase character
 *
 * Return: 1 if x uppercase and 0 otherwise
 */
int _isupper(x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
