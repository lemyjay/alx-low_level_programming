#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * positive_or_negative - Entry point to the function
 *
 * @i: holds the value of the integer to be tested
 * checks if a given number is negative, positive or zero
 * returns nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
