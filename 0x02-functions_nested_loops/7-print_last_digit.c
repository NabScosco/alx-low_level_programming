#include "main.h"
/**
 * print_last_digit - Printing the last digit of a mumber
 * Return: Always i.
 * @a: Receives inputs
 */

int print_last_digit(int a);
{
	int i;

	i = a % 10;

	putchar(i);
	putchar('\n');
	return (i);
}
