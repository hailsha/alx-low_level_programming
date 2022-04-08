#include <stdio.h>

/**
   * main - print alphabet except q and e
   *
   * Return: zero
   */
int main(void)
{
	char let = 'a';

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let == 'q' || let == 'e')
			continue;
		putchar(let);
	}
	putchar('\n');
	return (0);
}
