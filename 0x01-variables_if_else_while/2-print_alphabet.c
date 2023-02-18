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
	int A;

	for (A = "a"; A <= "z"; A++)
	{
		putchar(A);
	}
	putchar("\n");
	return (0);
}
