#include "main.h"
/**
 * times_table - Entry point
 * @void: c program
 */
void times_table(void)
{
	int i, l, u;

	for (i = 0; i <= 10; i++)
	{
		for (l = 0; l <= 10; l++)
		{
			u = l * i;
			if (l == 0)
			{
				_putchar(u + '0');
			}
			if (u < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(u + '0');
			}
			else if (u >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((u / 10) + '0');
				_putchar((u % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
