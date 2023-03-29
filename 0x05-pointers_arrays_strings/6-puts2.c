#include "main.h"

/**
* puts2 - prints every other characterof string
* @str: a string
* Return: Always 0
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i - 1] != '\0')
		{	break;
		}
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
