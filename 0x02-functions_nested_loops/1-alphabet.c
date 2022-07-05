#include "main.h"

/**
 * print_alphabet -print alphabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		printf (ch);
	}
	printf (10); /* ascii code for return*/

	return (0);
}
