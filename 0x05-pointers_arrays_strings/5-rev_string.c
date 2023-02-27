#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	char *begin, *end, temp;

	begin = s;
	end = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (int i = 0; i < len - 1; i++)
	{
		end++;
	}
	for (int i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
