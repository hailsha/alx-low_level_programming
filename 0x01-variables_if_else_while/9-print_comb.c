#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: zero
 */

int main(void)
{
	int i = 48;

	for ( ; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
