#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * Return: always 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
