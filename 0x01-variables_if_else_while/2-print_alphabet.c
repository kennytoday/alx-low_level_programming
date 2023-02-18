#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description - 'C program in lower case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A;

	A = "a";

	while
		(A <= "z")
	{
		putchar(A);
		A++;
	}
	putchar("\n");
	return (0);
}
