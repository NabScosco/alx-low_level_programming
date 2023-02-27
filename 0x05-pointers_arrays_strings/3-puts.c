#include "main.h"

/**
 * _puts - This prints a string, followed by a new line,
 * @str: A pointer to the string for printing
 * Return: void
 */

void _puts(char *str)
{
	int var = 0;

	while (str[var])
	{
		_putchar(str[var]);
		i++;
	}
	_putchar('\n');
}
