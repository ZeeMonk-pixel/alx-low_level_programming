#include <stdio.h>

/**
 * main(void)-prints the alphabet in lowercase, followed by a new line.
 * prints eac letter using put char in a loop
 * Return: returns 0
 */

int main(void) {
	char letter = 'a'

	while (letter <= 'z') 
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
