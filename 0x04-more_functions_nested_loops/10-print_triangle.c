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
		for (j = 0; j < size; j++)
		{

			if (j >= size - i - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

