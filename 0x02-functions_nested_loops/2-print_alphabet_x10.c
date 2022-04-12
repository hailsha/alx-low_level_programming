#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 * followed by new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	for ( ; i <= 9; i++)
	{
		for ( ; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
