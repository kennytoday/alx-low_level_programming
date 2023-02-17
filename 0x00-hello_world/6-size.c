#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - C program that prints various types of computers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long int j;
	long long int k;
	float b;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(j));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(b));
	return (0);

}
