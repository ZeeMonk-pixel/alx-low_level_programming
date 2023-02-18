#include <stdio.h>

/**
 * main(void)- prints every possible single digit with a comma
 * and space in ascending order
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
