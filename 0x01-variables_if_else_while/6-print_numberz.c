#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 from 0
 *Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);/*ascii code for new line*/

	return (0);
}
