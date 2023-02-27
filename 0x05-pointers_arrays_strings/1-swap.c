#include <stdio.h>

/**
 * swap_int - swaps the values of the two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
/*The function that swaps the value of 2 integers.*/

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
