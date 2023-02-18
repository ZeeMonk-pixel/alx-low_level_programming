#include <stdio.h>

/**
 * main(void)- prints the alphabet with an 
 * exception of letter 'q' and 'e'
 * Return: returns 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
