#include "main.h"

/**
 * print_numbers - Entry point
 * @void: C program to print from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar("%d", i);
	_putchar("\n");
}