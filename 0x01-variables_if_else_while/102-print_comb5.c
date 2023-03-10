#include <stdio.h>

/**
 * main(void)-  prints all possible combinations of two two-digit numbers
 *  range from 0 to 99 separated by a space
 * Return: returns 0
 */

int main(void)
{
	int i, j, last;

	last = 99 * 100 / 2 - 99;
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if ((i * 100 + j - i - (i + 1) * i / 2) != last)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
