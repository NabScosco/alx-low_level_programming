#include "main.h"

/**
 * *_strcat - Thid function concatenates two srtings
 * @dest: Param pointer to a char
 * @src: Param pointer to a char
 * Return: Return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
