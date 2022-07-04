#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program returns a random integer and tells its sign
 *
 * Return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("The number is postive\n")
	}
	else if (n == 0) {
		printf("The number is zero\n")
	}
	else {
		printf("The number is negative\n")	
	}
	return (0);
}
