#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - checks for upper and lowercase alphabets
 *  @c: variable
 *  Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
