#include "main.h"

/**
 * get_endianness - it checks the endianness
 *
 * Return: 0 for big endian , 1 for little endian
 *
 */

int get_endianness(void)
{
int n = 1;
char *e = (char *)&n;

if (*e == 1)
return (1);

return (0);
}
