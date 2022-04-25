#include "main.h"

/**
 * _strspn - locates a character in a string,
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: the counter to the occurrence of the characters in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i = 0, j = 0, k, l;

	while (accept[i] != '\0')
		i++;
	while (s[j] != '\0')
		j++;
	for (k = 0; k < i; k++)
	{
		for (l = 0; l < j; l++)
		{
			if (*(accept + k) == *(s + l))
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
