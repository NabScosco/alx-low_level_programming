#include "main.h"

/**
 * _puts - This prints a string, followed by a new line,
 * @s: ztis is the pointer to the string to be printted
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
