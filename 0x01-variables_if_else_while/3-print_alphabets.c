#include <stdio.h>

/**
 * main(void)-prints the alphabet in lowercase
 * then in uppercase and a new line after that
 * Return: returns 0
 */

int main(void)
{
	int letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		letter = 'A';
		while (letter <= 'Z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	return (0);
}
