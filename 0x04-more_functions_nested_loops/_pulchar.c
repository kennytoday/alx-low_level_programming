#include "main.h"
#include <unistd.h>

/**
 * _putchar - Main Entry
 * @c: Program to print
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
