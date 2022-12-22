#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @str:string
 * Return:char
 */

char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (string);
}
