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
	char *result = strchr(s, c);

	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
