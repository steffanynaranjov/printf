#include "holberton.h"
char *p_binary(int n);
/**
* print_binary - prints binary
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Return: int
*/
int print_binary(va_list vlist, char *output_p, int o_p)
{
int x, y = 0;
char *print;

x = va_arg(vlist, int);
print = print_binary(x);

for (; print[y]; y++, o_p++)
output_p[o_p] = print[y];
return (o_p);
}

/**
* p_binary - prints a binary
* @n: int to convert
*
* Description: Function that print a char
* Return: int
*/
char *p_binary(int n)
{
int a, b, c, f = 0;
char *ptr, *zero = "0";

c = 0;
if (n == 0)
return (zero);
ptr = (char *)malloc(33);
if (!ptr)
exit(EXIT_FAILURE);
for (a = 31; a >= 0; a--)
{
b = n >> a;
if (b & 1)
*(ptr + c) = 1 + '0';
else
*(ptr + c) = 0 + '0';
c++;
}
*(ptr + c) = '\0';
while (ptr)
{
if (*ptr != '0')
f = 1;
if (f == 1)
return (ptr);
ptr++;
}
free(ptr);
return (ptr);
}
