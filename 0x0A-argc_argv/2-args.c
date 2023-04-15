#include <stdio.h>
/**
* main - prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return (0);
}
