#include "main.h"

/**
 *swap_int - given two integers, swap the value they hold
 *@a: parameter 1
 *@b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int ubn;

	ubn = *a;
		*a = *b;
		*b = ubn;
}
