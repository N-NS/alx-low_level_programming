#include <stdio.h>

/**
 * main - Entry point
 * main description - prints the size of various types
 * Return: 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
