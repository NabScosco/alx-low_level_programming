#include "main.h"
/**
 * flip_bits - This Returns the number of bits needed to
 * be flipped to convert one number to another.
 * @n: This is the first number.
 * @m: This is the second number.
 * Return: The number of bits that is needed to be flipped
 * to convert one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		if ((xor_result & 1) == 1)
			count++;
		xor_result >>= 1;
	}
	return (count);
}
