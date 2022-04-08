#include <stdio.h>

/**
   * main - print alphabet except q and e
   *
   * Return: zero
   */
int main(void)
{
	for (char let = 'a'; let <= 'z'; let++)
	{
		if (let == 'q' || let == 'e')
			continue;
		putchar(let);
	}
	putchar('\n');
	return (0);
}
