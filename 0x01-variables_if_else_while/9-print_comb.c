#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: zero
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
