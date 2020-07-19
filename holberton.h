#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#define SIZE 2048

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*format_type(char *s))(va_list vlist, char *output_p, int o_p);
int print_percent(va_list vlist, char *output_p, int o_p);
int print_char(va_list vlist, char *output_p, int o_p);
int s_trlen(char *str);

/**
* struct t_format - Struct t_format
*
* @character: the class
* @ch: pointer to a function
*
* Description: the structure for the format type
*/
typedef struct t_format
{
char *character;
int (*ch)(va_list vlist, char *output_p, int o_p);
} t_f;

#endif
