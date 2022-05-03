#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *concStr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (!s1 || !s2)
		return (NULL);
	concStr = malloc(sizeof(char) * (i + j));
	if (!concStr)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		concStr[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		concStr[k + i] = s2[k];
	return (concStr);
}
