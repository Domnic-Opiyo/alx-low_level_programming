#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
