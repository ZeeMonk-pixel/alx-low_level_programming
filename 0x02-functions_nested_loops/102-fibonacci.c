#include <stdio.h>

/**
 * main(void)- prints the first 50 Fibonacci numbers, starting with
 *  1 and 2, followed by a new line.
 *  Return: returns 0
 */

int main(void)
{

	int i, count = 50;
	unsigned long first = 0, second = 1, next;

	for (i = 1; i <= count; ++i)
	{
		if (i == 1)
		{
			printf("%lu", second);
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
			printf(", %lu", next);
		}
	}
	printf("\n");
	return (0);
}
