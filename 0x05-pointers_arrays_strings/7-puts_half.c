#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int len = 0, half;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (half = (len - 1)/2; half < len; half++)
		_putchar(str[half]);
	_putchar('\n');
}
