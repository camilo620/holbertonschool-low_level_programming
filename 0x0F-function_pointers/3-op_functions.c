#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add two integers
 * @a: first number to be add
 * @b: second number to be add
 * Return: result of the add operation
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: first number to be substract
 * @b: second number to be substract
 * Return: result of the add operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicates two integers
 * @a: first number to be multiplicated
 * @b: second number to be multiplicated
 * Return: result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: first number to be divide
 * @b: second number to be divided
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets the module of two integers
 * @a: first number
 * @b: second number
 * Return: module
 */
int op_mod(int a, int b)
{
	return (a % b);
}
