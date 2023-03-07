#include "main.h"
/**
 * _memcpy - A function copies memory area,
 * @dest: This is the destination memory area.
 * @src: This is  the source memory area.
 * @n: The bytes filled.
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
