#include "main.h"

/**
 * print_sign(int n)- prints the sign of a number
 * @n: my integer
 * Return: 0 if successful
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
