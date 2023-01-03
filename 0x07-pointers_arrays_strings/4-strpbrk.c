#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string
 * @s: the string
 * @accept: bytes
 * Return: string
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
