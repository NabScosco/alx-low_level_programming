#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	/* Check the first byte of the integer */
	if (*ptr == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
