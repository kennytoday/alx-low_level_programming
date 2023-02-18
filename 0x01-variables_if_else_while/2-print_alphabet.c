#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - 'C program in lower case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char gl;

	for (gl = 'a'; gl <= 'z'; gl++)
		putchar(gl);
	putchar('\n');
	return (0);
}
