#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings followed by new line.
* @separator: string to be printed between strings.
* @n: number of strings passed.
* @...: variable number of strings arguments.
*
* Description: If separator is NULL,dont print.
 *              If one of the strings is NULL,print (nil).
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string_args;
char *strng;
unsigned int i;

va_start(string_args, n);

for (i = 0; i < n; i++)
{
strng = va_arg(string_args, char *);
if (strng == NULL)
printf("(nil)");
else
printf("%s", strng);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(string_args);
}

