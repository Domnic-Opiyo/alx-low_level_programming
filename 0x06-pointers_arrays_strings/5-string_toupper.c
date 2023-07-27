#include "main.h"

/**
 * string_toupper - .......
 * @str: ....
 * Return: .......
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '0')
			str[index] -= 32;
		index++;
	}
	return (str);
}
