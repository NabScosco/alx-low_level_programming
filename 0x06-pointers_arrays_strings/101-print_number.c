#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int A, B, count;

	if (n < 0)
	{
		_putchar(45);
		A = n * -1;
	}
	else
	{
		A = n;
	}

	B = A;
	count = 1;

	while (B > 9)
	{
		B /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((A / count) % 10) + 48);
	}
}
