#include "main.h"

/**
 * times_table - print the 9 times table, starting with zero.
 *
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for ( ; i <= 9; i++)
	{
		for ( ; j <= 9; j++)
		{
			int product = i * j;

			if (j != 9)
			{
				if (product <= 9)
					_putchar('0' + product);
				else
				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
			}
		}
		_putchar('\n');
	}
}
