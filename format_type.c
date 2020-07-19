#include "holberton.h"
/**
* format_type - type of function
* @s: input
*
* Description: Function to get the type function
* Return: type or null
*/
int (*format_type(char *s))(va_list vlist, char *output_p, int o_p)
{
t_f types[] = {
{"c", print_char},
{"s", print_string},
{"i", print_single_int},
{"d", print_int},
{"b", print_binary},
{"r", print_string_reverse},
{"R", print_rot13},
{"u", print_unsignet_int},
{"o", print_octal},
{"x", print_hexa},
{"X", print_unsigned_hexad},
{"p", print_address},
{"S", print_the_string},
{"%", print_percent},
{NULL, NULL}
};
int x;
x = 0;

while (types[x].character)
{
if (types[x].character[0] == s[0] && s[0] != '\0')
return (types[x].ptrfunc);
x++;
}
return (NULL);
}
