#include "main.h"

/**
 * swap_int - Updates the value of an integer to 98
 * @a: A pointer to first integer
 * @b: A pointer to second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
