#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10); /*ascii code for new line*/

	return (0);
}
