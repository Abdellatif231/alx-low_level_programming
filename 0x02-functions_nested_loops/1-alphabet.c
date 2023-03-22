#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
/**
 * print_alphabet() - Prints the alphabet in lowercase
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}


int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}
