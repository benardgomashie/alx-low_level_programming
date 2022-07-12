#include "main.h"

/**
 * puts2 - prints every other charater of a string with first charater
 * @str: string to be manipulated
 * Return: returns as void
 */

void puts2(char *str)
{
	char *ptr = str;
	int len = 0;
	int j;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	for (j = 0; j <= (len - 1); j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
