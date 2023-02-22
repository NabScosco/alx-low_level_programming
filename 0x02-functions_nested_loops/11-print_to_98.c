#include "stdio.h"

/**
 * print_to_98 - This function prints all natural numbers
 * @i: the input value
 * Return: Returns none
 */

void print_to_98(int i)
{
	if (i > 98)
	{
		for (; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (i < 98)
	{
		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i);
}
