#include "main.h"

/**
 * print_last_digit - This function prints the last digit of an interger.
 * @a: This holds the value
 *
 * Return: Returns the last digit of n
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}

