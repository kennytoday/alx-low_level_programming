#include "main.h"
/**
 * swap_int - swap value of two int pointers
 * @a: a pointer
 * @b: b pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
