#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies bytes from one memory area to another
 * @n: max bytes
 * @src: source
 * @dest: memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
