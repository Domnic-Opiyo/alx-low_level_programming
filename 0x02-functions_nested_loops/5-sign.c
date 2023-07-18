#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the signs of a number
 * @n: the number to be printed sign of
 * Return: always 0 for success 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
	return (-1);
	}
	else
	{
		_putchar(48);
	return (0);
	}
}
