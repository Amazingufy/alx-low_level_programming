#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @author Ufy
 * @a: The first integer to be swapped.
 * @b: The second interger to be swapped.
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
