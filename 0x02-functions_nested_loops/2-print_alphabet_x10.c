#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints  the alphabet in lower case x10
 * Return: alway 0
 */
void print_alphabet_x10(void)
{
	char m;
	int a = 0;

	while (a <= 9)
	{
		for  (m = 'a'; m <= 'z'; m++)
		{
		putchar(m);
		}
		putchar('\n');
		a++;
	}
}
