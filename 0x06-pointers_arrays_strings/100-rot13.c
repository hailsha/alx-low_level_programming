#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *str)
{
	/**
	*int count = 0, i;
	*char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	*char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	*
	*while (*(s + count) != '\0')
	*{
	*	for (i = 0; i < 52; i++)
	*	{
	*		if (*(s + count) == alphabet[i])
	*		{
	*			*(s + count) = rot13[i];
	*			break;
	*		}
	*	}
	*	count++;
	*}
	*/
	while (*str != '0')
	{
		if ((*str >= 'a' && *str < 'n') || (*str >= 'A' && *str < 'N'))
			*str += 13;
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str < 'Z'))
			*str -= 13;
	}

	return (str);
}
