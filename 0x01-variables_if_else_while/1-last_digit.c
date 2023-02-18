#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main - Entry Point
 *
 * Description - 'C program that reads digits and n number'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n", n);
	}

	return (0);
}
