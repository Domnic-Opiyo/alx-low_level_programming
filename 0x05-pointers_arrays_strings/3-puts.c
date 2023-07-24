#include "main.h"

/**
 * _puts - .....
 * @str: .....
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
