#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lower case
 * Return: always 0
 * @c: parinthesis
 */
int _islower(int c)
{

	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	return (0);
}
