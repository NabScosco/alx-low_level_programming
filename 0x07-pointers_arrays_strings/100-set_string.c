#include "main.h"

/**
 * set_string - This sets the value of a pointer to a char
 * @s: The source adress.
 * @to: The target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
