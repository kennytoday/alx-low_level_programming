#include "main.h"

/**
 * _isupper - Entry point
 * @c: C program to print upper case
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
