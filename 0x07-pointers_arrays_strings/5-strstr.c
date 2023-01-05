#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring in the strin
 * @needle: substring searched for
 * @haystack: string to be searched
 *
 * Return: If found - pointer to the beginning of the substring
 * If not found - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index +1] == '\0')
				return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}
	
	return ('\0');
}
