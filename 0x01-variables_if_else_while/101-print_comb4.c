#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: zero
 */

int main(void)
{
	int i = 48;

	for ( ; i <= 55; i++)
	{
		int j = i + 1;

		for ( ; j <= 56; j++)
		{
			int k = j + 1;

			for ( ; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
