#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Finding the last digit of n using modulos*/
	modulo = n % 10;
	/*Grouping the last digits using if...else statements*/
	if (modulo > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	else if (modulo == 5)
		printf("Last digit of %d is %d and is 0\n", n, modulo);
	else if (modulo < 6 && modulo != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);
	return (0);
}
