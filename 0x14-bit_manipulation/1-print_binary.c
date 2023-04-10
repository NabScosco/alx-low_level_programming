#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		_putchar((n & 1) ? '1' : '0');
		n >>= 1;
		i++;
	}
}
