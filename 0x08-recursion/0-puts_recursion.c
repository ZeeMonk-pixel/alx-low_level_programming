#include "main.h"

/**
 * _puts_recursion - takes a string and performs a recursive function on them
 * @char *s: takes a variable s
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
