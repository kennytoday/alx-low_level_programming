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
	printf("size of char: %lu byte(s),\n" sizeof(char));
	printf("size of int: %lu byte(s),\n" sizeof(int));
	printf("size of long int: %lu bytes(s),\n" sizeof(long int));
	printf("size of long long: %lu byte(s),\n" sizeof(long long));
	printf("size of a float: %lu byte(s),\n" sizeof(float));
	return (0);

}
