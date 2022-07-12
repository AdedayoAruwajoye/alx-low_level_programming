#include "main.h"
#include <stdio.h>

/**
 * swap_int - This is a function that swaps the values of two integers
 *@c: This is the empty variable for manipulation
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c; 
}
