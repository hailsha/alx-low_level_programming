#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr;

	if (size == 0)
		return (NULL);
	chr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		chr[i] = c;
	return (chr);
}
