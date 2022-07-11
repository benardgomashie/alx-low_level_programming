#include "main.h"

/**
 * _strlen  - returns the lenth of the string
 * @s: string to be counted
 * Return: len of str
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
