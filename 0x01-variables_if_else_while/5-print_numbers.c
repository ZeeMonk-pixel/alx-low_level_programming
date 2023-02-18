#include <stdio.h>

/**
 * main(void)- prints all single digit numbers of base 10
 *  starting from 0, followed by a new line.
 *  Return: returns 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
