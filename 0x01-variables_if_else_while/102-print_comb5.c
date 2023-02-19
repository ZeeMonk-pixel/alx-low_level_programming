#include <stdio.h>

/**
 * main(void)-  prints all possible combinations of two two-digit numbers
 *  range from 0 to 99 separated by a space
 * Return: returns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i != j && j != 99)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
