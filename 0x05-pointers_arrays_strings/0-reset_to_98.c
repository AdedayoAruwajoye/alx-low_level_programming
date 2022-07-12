#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - This code takes a pointer and updates its value
 * @n: This is the first integer
 * @*p: This is my dereferencing
 *
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int *p;

	n = 40;
	p = &n;
	*p = 98;
}
