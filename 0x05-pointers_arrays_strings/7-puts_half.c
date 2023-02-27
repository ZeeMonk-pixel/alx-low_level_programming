#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 */

void puts_half(char *str)
{
	int len = 0;
	int n = 0;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;
	}
	i = n;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
