#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* set the bit at the given index to 1 */
	*n = (*n | (1ul << index));
	return (1);
}
