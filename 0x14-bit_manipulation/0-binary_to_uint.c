#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int y, i;
	int increment = 1;
	unsigned int binary, ans = 0;
	int count = 0;

	if (b == NULL)
		return (0);

	for (y = 0; b[y] != '\0'; y++)
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		binary = b[i] - '0';
		if (binary != 1 && binary != 0)
		{
			return (0);
		}
		else
		{
			ans = ans + (binary * increment);
			increment = increment * 2;
		}
	}
	return (ans);
}
