#include "main.h"
/**
 * _abs - Function computes the absolute number
 * Return: Always 0.
 * @a: Receives inputs
 */

int _abs(int a)
{
	int i = a;
	int y;

	if (i < 0)
	{
		i = i * (-1);
	}
	y = i;
	return (y);
}
