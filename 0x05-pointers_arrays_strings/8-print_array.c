#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array
* @a: an array
* @n: the number of elements
* Return: always 0
*/

void print_array(int *a, int n)
{
	int len = sizeof(a) / sizeof(a[0]);

	for (n = 0; n < len; n++)

		printf("%d, ", a[n]);
	printf("\n");
}
