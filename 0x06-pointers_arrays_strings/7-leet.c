#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	char let[] = "43071";
	char upp[] = "AEOTL";
	char low[] = "aeotl";
	int j;

	while (*s != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*s == upp[j] || *s == low[j])
			{
				*s = let[j];
				break;
			}
		}
		s++;
	}
	return (s);
}

