#include "main.h"

/**
 * flip_bits - Returns number of bits to be flipped
 * @n: first number to flip
 * @m: second number to flip
 *
 * Return: number of bits to be flip from n to get m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned long int bit = 0;

while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}
return (bits);
}
