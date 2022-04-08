#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: zero
 */

int main(void)
{
	char i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
