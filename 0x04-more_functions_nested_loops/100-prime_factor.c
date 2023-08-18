#include <stdio.h>

/**
 * main - Entry point to the code.
 *
 * A program that finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0.
 */
int main(void)
{
	long int i, a;
	long int largestPF = 0;
	long int checkPrime = 0;
	long int number = 612852475143;
	for (i = 1; i <= number; i++)
	{
		/*int temp = i;*/
		if (number % i == 0)
		{
			for (a = 1; a <= i; a++)
			{
				if (i % a == 0)
					checkPrime++;
			}
			if (checkPrime == 2)
			{
				if (largestPF < i)
					largestPF = i;
			}
		}
	}
	printf("%ld\n", largestPF);

	return (0);
}
