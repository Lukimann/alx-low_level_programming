#include "main.h"
/**
 * _puts - prints a string
 * @str: the string in question
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	for (; *str != '\0' str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
