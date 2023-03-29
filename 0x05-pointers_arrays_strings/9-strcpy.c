#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcpy - copies a string
* @dest: a string
* @src: a string
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
