#include <stdio.h>

/**
 * main(void)-finds and prints the sum of the even-valued terms,
 *  followed by a new line
 *  Return: returns 0
 */

int main(void)
{
	int i;
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
