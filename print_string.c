#include "holberton.h"
/**
* print_string - Print string
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print a string
* Return: the int
*/
int print_string(va_list vlist, char *output_p, int o_p)
{
int x = 0;
char *print = va_arg(vlist, char *);

if (!print)
print = "(null)";
for (; print[x]; x++ o_p++)
output[o_p] = print[x];
return (o_p);
}
