#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: bit to be checked
 * @index: index of bit
 *
 * Return: on success value of bit index
 *         on failure -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
