#include <stdio.h>

/**
 * main - prints the alphabet in lower case then followed by a new line
 *
 * Return: 0 for success
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
