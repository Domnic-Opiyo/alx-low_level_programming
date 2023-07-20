#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for upper case
 * @c: the integer that is checked
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
