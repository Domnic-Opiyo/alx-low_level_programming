#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digits of base 10 from zero followed by a new line
 * Return: always 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
