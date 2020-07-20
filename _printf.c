#include "holberton.h"
/**
* _printf - Print all this parameters
* @format: input
*
* Description: function that prints output
*
* Return: The output character or num
*/
int _printf(const char *format, ...)
{
int x = 0, o_p = 0;
char *print = (char *) format, *output_p;
int (*print_ptrfun)(va_list, char *, int);
va_list vlist;

if (!format)
return (-1);
va_start(vlist, format);
output_p = malloc(sizeof(char) * SIZE);
if (!output_p)
return (1);
while (format[x])
{
if (format[x] != '%')
output_p[o_p] = format[x], o_p++;
else if (s_trlen(print) != 1)
{
print_ptrfun = format_type(++print);
if (!print_ptrfun)
output_p[o_p] = format[x], o_p++;
else
o_p = print_ptrfun(vlist, output_p, o_p), x++;
}
else
o_p = -1;
x++, print++;
}
va_end(vlist);
write(1, output_p, o_p);
free(output_p);
return (o_p);
}
