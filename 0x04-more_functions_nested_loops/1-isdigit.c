#include "main.h"

/**
 * _isdigit - Entry point
 * @c: C program to check for a digit
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
