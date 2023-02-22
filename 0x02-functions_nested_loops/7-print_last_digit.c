#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: C program
 *
 * Return: Always 0
 */
nt print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}