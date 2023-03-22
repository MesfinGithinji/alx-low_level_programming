#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Computes sum of two numbers.
* @a: first num.
* @b: second num.
*
* Return: sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Computes difference of two numbers.
* @a: first num.
* @b: second num.
*
* Return: difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - computes product of two numbers.
* @a: first num.
* @b: second num.
*
* Return: product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - divides two numbers.
* @a: first num.
* @b: second num.
*
* Return: quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Returns the modulus of a and b.
* @a: first num.
* @b: second num.
*
* Return: modulus of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}

