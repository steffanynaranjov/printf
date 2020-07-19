#include "holberton.h"
/**
<<<<<<< HEAD
* print_string - Print a string
* @vlist: arguments passed to print
* @output_p: Host output
* @o_p: output position
*
* Description: Fuction that print %
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
=======
 * print_string - prints a string
 * @vlist: arguments passed to print
 * @output_p: host output
 * @o_p: output position
 *
 * Return: the int
 */
int print_string(va_list vlist, char *output_p, int o_p)
{
	int x = 0;
	char *print = va_arg(vlist, char *);

	if (!print)
		print = "(null)";
	for (; print[x]; x++ o_p++)
		output_p[o_p] = print[x];
	return (o_p);
>>>>>>> fa890ee9cbeca4738d08bf910fe064a20accb995
}
