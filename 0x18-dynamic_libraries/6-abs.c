#include "main.h"

/**
 * _abs - checks for the absolute number of a given digit
 * @n: is the input argument of type integer
 * Return: The absolute number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
