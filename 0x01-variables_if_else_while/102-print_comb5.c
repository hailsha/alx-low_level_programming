#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digit numbers.
 *
 * Return: zero
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	for ( ; i <= 57; i++)
	{
		for ( ; j <= 56; j++)
		{
			for ( ; k <= 57; k++)
			{
				int l = j + 1;

				for ( ; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (j == 56)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
