#include <stdio.h>

/**
 * main(void)- prints all possible combinations of single-digit numbers.
 * prints in ascending order
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
