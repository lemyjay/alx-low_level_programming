#include <stdio.h>
#include <math.h>

/**
 * main - Entry point to the code.
 *
 * A program that finds and prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int largestPF = 0;
	unsigned long int i;
	unsigned long int number = 612852475143;

	/* Divide by 2 until the number becomes odd */
	while (number % 2 == 0)
	{
		largestPF = 2;
		number /= 2;
	}

	/* Check for prime factors starting from 3 */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPF = i;
			number /= i;
		}
	}

	/* If the remaining number is a prime factor larger than current largest */
	if (number > 2 && number > largestPF)
		largestPF = number;

	printf("%lu\n", largestPF);

	return (0);
}
