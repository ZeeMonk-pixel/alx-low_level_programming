#include "main.h"

/**
 * int _islower(int c)-checks for lowercase character
 * Return: returns 1 if unsucessful and 0 if successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
