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
	char kenny;

	for (kenny = 'a'; kenny <= 'z'; kenny++)
	{
		putchar(kenny);
	}
	putchar("\n");
	return (0);
}
