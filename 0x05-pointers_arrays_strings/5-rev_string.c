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
	s = begin;
	while (end < s + len - 1)
	{
		end++;
	}
	while (i < len / 2)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
		i++;
	}
}
