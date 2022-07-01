#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * main dscription - print number in variable n
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	if (n == 0)
	{
		printf("and is 0");
	}
	if (n < 6 && n != 0)
	{
		printf("and is 0");
	}
	printf("\n");
	return (0);
}
