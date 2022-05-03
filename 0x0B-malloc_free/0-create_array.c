#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
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
