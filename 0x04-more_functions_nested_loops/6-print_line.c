#include "main.h"

/**
 * print_line(int n)-  draws a straight line in the terminal
 * @n- line number
 * Return: 
 */

int print_line(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
                return;
        }
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
