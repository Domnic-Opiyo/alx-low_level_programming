#include <stdio.h>
#include "main.h"

/**
 * print_numbers - the function that prints numbers
 * Return: .....
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);

	_putchar('\n');
}
