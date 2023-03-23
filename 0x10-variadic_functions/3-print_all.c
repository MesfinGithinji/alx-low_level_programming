#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of argument types passed
*/

void print_all(const char * const format, ...)
{
int i = 0;
char *strng, *seprtr = "";

va_list mylist;

va_start(mylist, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", seprtr, va_arg(mylist, int));
break;
case 'i':
printf("%s%d", seprtr, va_arg(mylist, int));
break;
case 'f':
printf("%s%f", seprtr, va_arg(mylist, double));
break;
case 's':
strng = va_arg(mylist, char *);
if (!str)
strng = "(nil)";
printf("%s%s", seprtr, strng);
break;
default:
i++;
continue;
}
seprtr = ", ";
i++;
}
}
printf("\n");
va_end(mylist);
}
