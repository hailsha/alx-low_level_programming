#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	for (char let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
		putchar('\n');
	}
	return (0);
}
