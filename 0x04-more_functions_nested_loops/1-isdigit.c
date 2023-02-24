#include "main.h"

/**
 * _isdigit(int c)- checks for a digit (0 through 9)
 * @c- the character
 * Return: returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
