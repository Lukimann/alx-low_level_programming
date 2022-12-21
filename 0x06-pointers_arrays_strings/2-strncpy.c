#include "main.h"
#include <string.h>
/**
 * _strncpy - for copying
 * @dest: parameter first
 * @src: parameter second
 * @n: parameter third
 * Return: string
 */

char *_strncpy(char *dest, *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
