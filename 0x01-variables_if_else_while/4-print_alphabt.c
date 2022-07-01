#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,then new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}
	}
	putchar (10); /*ascii code for new line*/

	return (0);
}
