#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string searched
 * @c: character located
 * Return: if c is found - pointer to first occurence
 * If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}

	return ('\0');
}
