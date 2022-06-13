#include "main.h"
#include <stdio.h>

/**
 * swap_int-"This pogram reset the variable with pointers"
 * @a: Le pointer
 * @b: Le pointeur
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
