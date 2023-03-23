#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns  sum of all  paramters.
* @n: number of paramters passed.
* @...: elipses indicates variable number of parameters.
*
* Return: If n == 0 - 0.
*         else  - retrn sum of parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list argp;
unsigned int i, sum = 0;

va_start(argp, n);

for (i = 0; i < n; i++)
{
sum += va_arg(argp, int);
}
va_end(argp);
return (sum);
}
