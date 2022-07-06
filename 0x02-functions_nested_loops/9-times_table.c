#include "main.h"
/**
 * times_table - main function
 * Return: null
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 0; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0' + c);
			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
