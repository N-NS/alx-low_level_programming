#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: always 0
 */
int main(void)
{
	char ch;
	int n;

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar(10); /*new line in ascii code*/

	return (0);
}
