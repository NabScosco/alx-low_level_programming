#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index, starting from 0 of the bit you want to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* check if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* shift the bit to the desired position */
	mask <<= index;

	/* invert the mask to clear the bit at the given index */
	mask = ~mask;

	/* clear the bit at the given index */
	*n &= mask;

	return (1);
}
