#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: c program
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; 1++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

