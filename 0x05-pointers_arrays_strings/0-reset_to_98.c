#include "main.h"

/**
 * reset_to_98 - Main Entry
 * @n: c program that points to integer
 * Return: 0
 */
void reset_to_98(int *n)
{
	int a;
	int *n;
	*n = 98;
	n = &a;
	_putchar("value of a is : %p\n", *n);

	return (0);
}
