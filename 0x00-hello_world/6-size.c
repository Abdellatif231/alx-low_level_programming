#include <stdio.h>
/**
 * main - Entery point of the programe
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typchar;
	int typint;
	long int typlongint;
	long long int typllint;
	float typfloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typchar));
	printf("Size of an int: %zu byte(s)\n", sizeof(typint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typlongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(typllint));
	printf("Size of a float: %zu byte(s)\n", sizeof(typfloat));
	return (0);
}
