#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				if (j == 0)
					_putchar('0' + product);
				else if (product <= 9)
				{
					_putchar(' ');
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}

}
