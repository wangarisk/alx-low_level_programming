#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurence of any bytes in the string
 * @s: strin to be searched
 * @accept: bytes to be searched for
 *
 * Return: pointer to the byte that matches 
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			return (s);
		}

		s++;
	}
	return ('\0');

}
