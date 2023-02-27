#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char *begin, *end, temp;

	begin = s;
	end = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (i < len - 1)
	{
		end++;
		i++;
	}
	while (i < len / 2)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
		i++;
	}
}
