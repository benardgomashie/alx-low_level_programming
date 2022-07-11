#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints str in reverse
 * @s: str
 * return: 0
 */

void print_rev(char *s)
{
	int i = 0;

		while (s[i])
		i++;
		while (i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');

}
