#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << (sizeof(n) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
