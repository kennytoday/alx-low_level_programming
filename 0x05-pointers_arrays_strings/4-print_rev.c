#include "main.h"
/**
 * print_rev - main entry
 * @s: program to print reverse string
 * Return: 0
 *
 */
void print_rev(char *s)
{
	int measure = 0;
	int a;

	while (*s != '\0')
	{
		measure++;
		s++;
	}
	s--;
	for (a = measure; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
