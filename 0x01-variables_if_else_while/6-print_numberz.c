#include <stdio.h>
/**
 * mian - numbers printer
 * Return: 0 is successful
 */
int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		putchar((var % 10) + '0');

	putchar('\n');

	return (0);
}
