#include <string.h>
#include "main.h"

/**
* print_rev - prints a string in revers
* @s: a string to revers
*
* Return: Always 0
*/

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
