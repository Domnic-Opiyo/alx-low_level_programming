#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a diggit number
 * @c: the variable to be checked
 * Return: .....
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
