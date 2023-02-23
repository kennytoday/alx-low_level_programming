#include "main.h"

/**
 * print_most_numbers - Entry point
 * @void: C program
 */
void more_most_numbers9void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 14)
		{
		continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
