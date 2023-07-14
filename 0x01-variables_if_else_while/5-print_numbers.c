#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digits numbers of base 10 from 0
 * Return: always0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
