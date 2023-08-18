#include <stdio.h>

/**
 * main - Entry point of the code.
 *
 * FizzBuzz
 * Prints numbers from 1 to 100 followed by a new line
 * For multiples of 3, it prints Fizz
 * For multiples of 5, it prints Buzz
 * And for multiples of both 3 and 5, it prints FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
