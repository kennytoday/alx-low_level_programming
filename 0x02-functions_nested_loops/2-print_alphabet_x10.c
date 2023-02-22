#include "main.h"

/**
 * print_alphabet_x100 - Entry point
 * @c: program that prints alphabets
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char al;

	i = 0;
	while (i < 10)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}

		_putchar('\n');
		i++;
	}
}
