#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character, followed by a new line
 * @str: The string to print
 */

void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;

	for (int i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
