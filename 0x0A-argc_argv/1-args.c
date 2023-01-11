#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: a parameter
 * @argv: an array
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
