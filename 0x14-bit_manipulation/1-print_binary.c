#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = 0;

	/* Determine the number of bits in the number */
	while ((n >> bit_count) > 0)
		bit_count++;

	/* Shift the mask to the highest bit */
	mask <<= bit_count - 1;

	/* Print each bit */
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
