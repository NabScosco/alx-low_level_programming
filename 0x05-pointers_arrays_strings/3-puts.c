#include "main.h"

/**
 * _puts - This prints a string, followed by a new line,
 * @str: A pointer to the string for printing
 * Return: void
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k])
	{
		_putchar(str[k]);
		i++;
	}
	_putchar('\n');
}
