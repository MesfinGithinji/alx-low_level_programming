#include "main.h"

/**
 * binary_to_uint - function to convert binary number to unsigned int
 * @b: pointer to a string of chars
 *
 * Return:converted number or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int val = 0;

if (b == NULL)
return (0);

for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '0')
return (0);
val = 2 * val + (b[x] - '0');
}
return (val);
}

