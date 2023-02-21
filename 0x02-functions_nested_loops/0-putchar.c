#include <unistd.h>
#include <main.h>
/**
 * main -Entry Point
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
