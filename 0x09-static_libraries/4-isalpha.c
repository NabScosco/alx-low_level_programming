#include "main.h"
/**
 * _isalpha - Checks is the varible is an alphabet
 * @c: the Parameter
 * Return: Returrn 1 for lower and uppercase, and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
