#include "main.h"
#include <stdio.h>

/**
 * swap_int - This is a function that swaps the values of two integers
 *@a: This is the first integer
 *@b: This is the second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
