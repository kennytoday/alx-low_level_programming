#include "main.h"
/**
 * puts2 - main entry
 * @str: c program
 * Return: 0
 */
void puts2(char *str)
{
	int john = 0;
	int a = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		john++;
	}
	a = john - 1;
	for (i = 0; i <= a; i++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
