#include "main.h"

/**
 * print_binary - function that prints binary of a number.
 * @n: number to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
int i, x = 0;
unsigned long int val;

for (i = 63; i >= 0; i--)
{
val = n >> i;

if (val & 1)
{
_putchar('1');
x++;
}
else if (x)
_putchar('0');
}
if (!x)
_putchar('0');
}
