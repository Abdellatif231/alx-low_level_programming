#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */


void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (n = 0; n <= 9; n++)
				{
					if (i >= 2 && j >= 4)
					{
						break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
		}
	}
}
