#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to print
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
