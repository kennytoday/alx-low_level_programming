#include "main.h"
/**
 * _strlen - c program to return string length
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int measure = 0;

	while (*s != '\0')
	{
		measure++;

		s++;
	}
	return (measure);
}
