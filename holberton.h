#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
/**
* struct t_input - Struct type to select specifiers
*
* @character: the argument passed to the function
* @ch: pointer to a function
*
*/
typedef struct t_input
{
char *character;
int  (*ch)(vali_list vlist, char *output_p, int o_p);
} t_f;

int _printf(const char *format, ...);
int _putchar(char c);
int (*format_type(char *s))(va_list vlist char *output_p int o_p);
int print_percent(va_list vlist, char *output_p, int o_p);
void _puts(char *s);

#endif
