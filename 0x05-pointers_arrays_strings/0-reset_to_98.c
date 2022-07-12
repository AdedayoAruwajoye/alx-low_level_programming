#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Always)
 */

int main(void)
{
	int n;
	int *p;

	n = 40;
	p = &n;
	*p = 98;
}
