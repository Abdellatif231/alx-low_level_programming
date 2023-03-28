#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: the first integer
* @b: the secend integer
* return: always 0
*/

void swap_int(int *a, int *b)
{
	int ct;

	ct = *a;
	*a = *b;
	*b = ct;
}
