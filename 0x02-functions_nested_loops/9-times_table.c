#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: none
 */

void times_table(void)
{
	int i, y, c;

	for (i = 0; i <= 9; i++)
	{

		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			c = i * y;
			_putchar(44);
			_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
