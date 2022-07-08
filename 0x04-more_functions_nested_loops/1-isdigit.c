#include "main.h"
#include <stdio.h>

/**
 * _isdigit - This program checks for a digit between 0 and 9
 * @c: - This is the parameter to be checked
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
