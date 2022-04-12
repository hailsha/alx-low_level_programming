#include "holberton.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char *putchar = "_putchar\n";

	while (*putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	return (0);
}
