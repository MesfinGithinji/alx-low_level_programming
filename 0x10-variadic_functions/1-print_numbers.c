#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Print numbers followed by new line.
* @separator: string to be printed between numbers.
* @n: number of integers passed to function.
* @...: variable number of arguments parsed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list mynum;
unsigned int i;

va_start(mynum, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(mynum, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(mynum);
}

