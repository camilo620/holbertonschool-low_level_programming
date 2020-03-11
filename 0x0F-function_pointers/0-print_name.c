#include "function_pointers.h"
#include <stdlibh>
/**
 * print_name - prints name with a funtion pointer
 *
 * @name: name to be printed
 *
 * @f: funtion pointer to print names
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
