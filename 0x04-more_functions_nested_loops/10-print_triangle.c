#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
			_putchar(' ');
		for (j = (size - i - 1); j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}

