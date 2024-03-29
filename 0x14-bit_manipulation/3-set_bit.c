#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the bit to be changed
 * @index: index of the bit
 *
 * Return: on success 1 , on failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n ^= (1 << index);

return (1);
}
