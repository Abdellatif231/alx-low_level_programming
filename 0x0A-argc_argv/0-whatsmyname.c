#include <stdio.h>
/**
* main - print the name of the programe
* @argc: argument count
* @argv: argument vector
* Retunr: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
