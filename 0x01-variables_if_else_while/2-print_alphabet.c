#include <stdio.h>
#include <stdlib.h>
/**
 * main - alphabetical
 * Return: 0 if successful
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
