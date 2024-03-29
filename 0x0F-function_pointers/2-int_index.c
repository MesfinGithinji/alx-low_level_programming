#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - returns index pstn  if true, else -1
* @array: array name
* @size: number of elements in array
* @cmp: pointer to function for comparison
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}

