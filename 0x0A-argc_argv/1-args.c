#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: a parameter
 * @argv: an array
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
