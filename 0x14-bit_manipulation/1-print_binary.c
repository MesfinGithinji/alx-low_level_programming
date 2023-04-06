#include "main.h"
#include <math.h>

/**
 * print_binary - function that prints binary of a number.
 * @n: number to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
int dec = 0,
int i = 0,
int rem;

while (n!=0) 
{
rem = n % 10;
n /= 10;
dec += rem * pow(2, i);
++i;
}
return dec;
_putchar(print_binary(n));
}
