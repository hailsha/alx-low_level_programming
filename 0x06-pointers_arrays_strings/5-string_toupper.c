#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		*s = (*s >= 97 && *s <= 122) ? (*s - 32) : *s;
		s++;
	}
	return (s);
}
