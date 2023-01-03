#include "main.h"
#include <string>

/**
 * _strchr - locating function
 * @s: string
 * @c: character
 * Return: string
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
