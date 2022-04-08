#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: zero
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
