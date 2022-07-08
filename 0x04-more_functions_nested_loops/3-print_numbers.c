#include "main.h"
#include <stdio.h>

/**
 * print_numbers - This program prints the numbers 0 - 9
 * Return: The numbers from 0 to 9
 */
void print_numbers(void)
{
	int a;

	for (a >= 48; a <= 57; a++)
		_putchar(a + '0');
	_putchar('\n');
}
