#include <stdio.h>

/**
 * main(void)- prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *  Return: returns 0
 */

int main(void)
{
	char digit = '0';
	char letter = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
