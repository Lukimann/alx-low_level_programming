#include <stdio.h>

/**
 * main - function to print name
 * @argc: argc parameter
 * @argv: an array
 * Return: Always 0 (success)
 */

int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
