#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum;
	char a;

	srand(time(NULL));
	while (sum <= 2645)
	{
		a = rand() % 128;
		sum += a;
		putchar(a);
	}
	putchar(2772 - sum);
	return (0);
}
