#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string
* @str: the string
* Return: Always 0
*/

void puts_half(char *str)
{
	int n;

	for (n = (strlen(str) - 1) / 2; str[n] != '\0'; n++)
	{
		if (n = strlen(str) - 2)
		{
			_putchar(str[n + 1]);
			break;
		}
		_putchar(str[n + 1]);
	}
	_putchar('\n');
}
