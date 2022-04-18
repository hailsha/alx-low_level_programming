#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @s: store the string.
 */
void print_rev(char *s)
{
	int len = 0, iter;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (iter = len; iter > 0; iter--)
		_putchar(*(s-iter));
	_putchar('\n');
}
