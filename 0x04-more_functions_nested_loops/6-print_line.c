#include "main.h"

/**
 * print_line - This prints straight line n times.
 * @n: nth times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(_);
	}
	_putchar('\n');
}
