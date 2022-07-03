#include <stdio.h>
/**
 * main - main funt
 * Return: int 0
 */
int main(void)
{
	char cT;
	int iT;
	long int lIT;
	long long int lLIT;
	float fT;

	printf("Size of a char: %zu byte(s)\n", sizeof(cT));
	printf("Size of an int: %zu byte(s)\n", sizeof(iT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lIT));
	printf("Size of a long Long int: %zu byte(s)\n", sizeof(lLIT));
	printf("size of a float: %zu byte(s)\n", sizeof(fT));
	return (0);
}
