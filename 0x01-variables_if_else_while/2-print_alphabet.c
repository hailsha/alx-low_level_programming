#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char let = 'a';

	for (let = 'a' ; let <= 'z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
