#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * string_length: prints number of characters.
 * @s: store character.
 * @: store character.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int fwd = 0, bwd, temp;

	while (*s != '\0')
	{
		fwd++;
		s++;
	}
	fwd--;
	for (bwd = 0; bwd <= fwd; bwd++, fwd--)
	{
		temp = s[bwd];
		s[bwd] = s[fwd];
		s[fwd] = temp;
	}
}
