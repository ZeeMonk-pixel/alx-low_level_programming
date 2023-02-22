#include <stdio.h>

/**
 * main(void)- prints the first 98 Fibonacci numbers,
 *  starting with 1 and 2, followed by a new line.
 *  Return: returns 0
 */

int main(void)
{
	unsigned int i, count = 98;
	unsigned int first = 1, second = 2, next;

	printf("%u, %u", first, second);
	for (i = 3; i <= count; ++i)
	{
		next = first + second;
		printf(", %u", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
