#include "main.h"
#include <stdio.h>

/**
 *_strlen - This is a function that returns a string length
 *@s: This is the veriable that helps me count the string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
	count++;
	}
	return (count);
}
