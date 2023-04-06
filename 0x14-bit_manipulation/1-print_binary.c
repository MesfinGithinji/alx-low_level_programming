#include "main.h"
#include <math.h>

/**
 * print_binary - function that prints binary of a number.
 * @n: number to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
int dec = 0;
int x = 0;
unsigned int val

while(n!=0)
{
val = n % 10;
n /= 10;
dec += val * pow(2, x);
++x;
}
return dec;
}
