#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar (ch);
	}
	putchar (10); /*ascii code for a new line*/

	return (0);
}

