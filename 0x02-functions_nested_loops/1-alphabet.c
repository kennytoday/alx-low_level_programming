#include "main.h"
/**
 * print_alphabet - Entry point
 * @c: program for alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
