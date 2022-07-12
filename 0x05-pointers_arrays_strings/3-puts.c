#include "main.h"
#include <stdio.h>

/**
 *_puts - This is a function that prints a string followed by a new line
 *@str: This is the variable that helps me count the string
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
