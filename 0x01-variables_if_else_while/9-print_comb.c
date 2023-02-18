#include <stdio.h>

/**
 * main(void)- prints all possible combinations of single-digit numbers.
 * prints in ascending order
 * Return: returns 0
 */

int main(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(j + '0');
			putchar('\n');
		}
	}
	return (0);
}
