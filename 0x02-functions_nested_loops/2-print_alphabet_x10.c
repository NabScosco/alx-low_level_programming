#include "main.h"

/**
 * print_alphabet_X10 - prints alpha 10 times
 * Return: Always 0.
 */

void print_alphabet_X10(void)
{
	int j;
	char k;

	for (j = 0; j < 10; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
