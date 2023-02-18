#include <stdio.h>
/**
 * main - Entry point
 *
 * Description -  program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char gl;

	for (gl = 'a'; gl <= 'z'; gl++)
	{
		if (gl != 'e' && gl != 'q')
			putchar(gl);
	}
	puchar('\n');
	return (0);
}
