#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints number to 9
 * @n: first number
 * Return: always 0
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	putchar(n);
	putchar(',');
	putchar(' ');
}
