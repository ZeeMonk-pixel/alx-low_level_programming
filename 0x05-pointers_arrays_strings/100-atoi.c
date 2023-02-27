#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, overflow = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			{
				overflow = 1;
			}
			else
			{
				num = num * 10 + (*s - '0');
			}
		}
		if (overflow)
		{
			num = (sign == 1) ? INT_MAX : INT_MIN;
			break;
		}
		s++;
	}
	return (num * sign);
}
