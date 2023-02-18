#include <stdio.h>

/**
 * main(void)- prints all possible different combinations of two digits
 * Return: returns 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
			}
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
