#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
/**
 * _putchar - Writes the character c to stdout
 * This function writes the character c to the standard output (stdout)
 * @c: The character to be written.
 *Return: On success, the character written is returned. On failure, -1 is returned.
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
