#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: zero
 */

int main(void)
{
	for (char i = '0'; i <= '9'; i++)
		putchar(i);
	for (char let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
