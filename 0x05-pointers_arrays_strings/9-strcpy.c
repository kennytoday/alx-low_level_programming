#include "main.h"
/**
 * _strcpy - main entry
 * @src: c program to copy
 * @dest: copy
 * @Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[1] = '\0';
	return (dest);
}
