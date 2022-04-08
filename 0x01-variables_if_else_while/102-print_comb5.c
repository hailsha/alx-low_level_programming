#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digit numbers.
 *
 * Return: zero
 */

int main(void)
{
	int i = j = k = 48, l = 49;

	for ( ; i <= 57; i++)
	{
		for ( ; j <= 56; j++)
		{
			for ( ; k <= 57; k++)
			{
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
