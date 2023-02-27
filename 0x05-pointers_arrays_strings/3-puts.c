#include "main.h"
/**
 * _puts - main entry
 * @str: function that print a string
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar ('\n');
}
