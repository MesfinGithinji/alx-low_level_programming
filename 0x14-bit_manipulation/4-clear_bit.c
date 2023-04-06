#include "main.h"

/**
 * clear_bit - Setes the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index position of bit to be changed
 *
 * Return: 1 on success , -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= ~(1 << index);

return (1);
}
