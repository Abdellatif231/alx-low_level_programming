#include "main.h"
/**
 * _isdigit - checks for uppercase character
 * @c: the character to check for
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
