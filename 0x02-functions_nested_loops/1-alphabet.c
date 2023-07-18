#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: always 0
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
}
