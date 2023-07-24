#include <stdio.h>

/**
 * _strlen - returns the lenghth of a string
 * @str: the string variable
 * Return: always 0
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
