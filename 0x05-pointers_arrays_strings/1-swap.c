/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: a pointer that holds the address of the first integer
 * @b: a pointer that holds the address of the second integer
 * Returns void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
