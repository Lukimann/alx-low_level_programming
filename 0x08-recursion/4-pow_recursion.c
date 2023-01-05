#include "main.h"

/**
 * _pow_recursion - function recursion
 * @x: a number
 * @y: a number
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y <= 1)
		return (1);
	return (x * pow(y - 1));
}
