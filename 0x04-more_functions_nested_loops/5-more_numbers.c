#include "main.h"
/**
 * more_numbers - Entry point
 * @void: program that print 10 times
 */

void more_numbers(void)
{
	int a;
	int b;
	
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
