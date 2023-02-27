#include "main.h"

/**
 * _strlen - This returns the length of a string.
 * @s: Receives input string.
 * Return: Returns the length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
