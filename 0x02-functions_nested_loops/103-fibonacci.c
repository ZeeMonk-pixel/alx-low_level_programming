#include <stdio.h>

/**
 * main(void)- prints the first 50 Fibonacci numbers, starting with
 *  1 and 2, followed by a new line.
 *  Return: returns 0
 */

int main(void)
{
	unsigned long first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
	if (second % 2 == 0)
	{
		sum += second;
	}
	next = first + second;
	first = second;
	second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
