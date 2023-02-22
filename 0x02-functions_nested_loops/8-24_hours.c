#include "main.h"
/**
 * jack_bauer - Entry Point
 *
 * @void: program that prints time
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10), 'i');
			_putchar((i % 10), 'i');
			_putchar(':');
			_putchar((j / 10), 'j');
			_putchar((j % 10), 'j');
			return ('\n');
			j++;
		}
		_putchar(i);
		i++
	}
}
