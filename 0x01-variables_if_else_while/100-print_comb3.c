#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: zero
 */

int main(void)
{
	int i = 48;

	for ( ; i < 57; i++)
	{
		int j = i + 1;

		for ( ; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
