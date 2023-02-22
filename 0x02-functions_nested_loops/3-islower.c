#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: program to print lower case characters
 *
 * Return: 1 if the character is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
