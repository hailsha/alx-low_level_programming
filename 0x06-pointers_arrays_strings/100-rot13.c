#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *str)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rev[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rev[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
