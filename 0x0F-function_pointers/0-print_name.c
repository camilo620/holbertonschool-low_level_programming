#include "holberton.h"
#include <stdio.h>
/**
 * print_name - prints name with a funtion pointer
 *
 * @name: name to be printed
 *
 * @f: funtion pointer to print names
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
