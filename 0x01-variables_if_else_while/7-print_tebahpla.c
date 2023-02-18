#include <stdio.h>

/**
 * main(void)- Write a program that prints the lowercase
 *  alphabet in reverse, followed by a new line.
 *  Return: returns 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
