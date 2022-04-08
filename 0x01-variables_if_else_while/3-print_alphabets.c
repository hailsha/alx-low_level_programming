#include <stdio.h>

/**
 *main - print lowercase and uppercase letters followed by newline
 *Return: Always 0 (Success)
 */

int main(void)
{
	char let = 'a';

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
