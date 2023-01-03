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
	int onezy;

	for (onezy = 0; s[onezy] >= '\0'; onezy++)
	{
		if (s[onezy] == c)
			return (s + onezy);
	}

	return ('\0');
}
