#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description - 'C program in lower case'
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	int kd;

	for (kd = 'a'; kd <= 'z'; kd++)
	{
		putchar(kd);
	}
	putchar("\n");
	return (0);
}
