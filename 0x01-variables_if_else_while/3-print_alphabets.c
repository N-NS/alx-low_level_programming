#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: always 0
 */
int main(void);
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar (ch)
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch)
	}
	putchar (10); /*ascii for new line*/

	return (0);
}
