#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse order
 *
 * Return: zero
 */

int main(void)
{
	char let = 'z';

	for ( ; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}
