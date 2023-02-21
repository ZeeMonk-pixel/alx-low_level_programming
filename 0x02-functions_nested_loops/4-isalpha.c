#include "main.h"

/**
 * _isalpha(int c)- checks for alphabetic character
 * @c: character
 * Return: returns 1 on error, returns 0 if successful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
