#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap 2 numbers
 * @a: first number
 * @b: seccond number
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
