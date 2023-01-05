#include "main.h"

/**
 * _sqrt_recursion - square root using recursion
 * @n: the number to square
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _sqrt_recursion(n (n - 1));
