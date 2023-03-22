#include "function_pointers.h"
#include <stdio.h>


/**
* print_name - use pointer to function to print name
* @name: string to add
* @f: function pointer
* Return: nothing
**/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

