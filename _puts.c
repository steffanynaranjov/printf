#include "holberton.h"
/**
 * _puts - prints a string
 *
 * @s: the string to be printed
 *
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(s++);
	}
}
