#include "main.h"

/**
 * _isupper(int c)- checks for uppercase character.
 * @c- c character
 * Return: returns 0 if lower 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
        	return (1);
    	}
	else
	{
		return (0);
	}
}
