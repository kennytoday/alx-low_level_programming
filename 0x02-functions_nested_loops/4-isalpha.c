#include "main.c"
/**
 * _isalpha - Entry point
 * @c: Program that checks alphabetic characters
 *
 * Return: 1 if c is a letter lowercase or uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >=  'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
