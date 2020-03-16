#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * cha - Prints a character
 * @arg: arguments
 * Return: void
 */
void cha(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * num - Prints integers
 * @arg: arguments
 * Return: void
 */
void num(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * fl - Prints floats
 * @arg: arguments
 * Return: void
 */
void fl(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * string - prints a string
 * @arg: arguments
 * Return: void
 */
void string(va_list arg)
{
	char *pointer;

	pointer = va_arg(arg, char *);
	if (pointer == 0)
	{
		pointer = "(nil)";
	}
	printf("%s", pointer);

}
/**
 * print_all - prints arguments sent
 * @format: Holds a string that contains identifiers of data types
 * @...: arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list checker;
	fun fun2[] = {
		{"c", cha},
		{"i", num},
		{"f", fl},
		{"s", string},
		{0, 0}
	};
	char *p1 = "", *p2 = ", ";

	i = 0;
	va_start(checker, format);
	while (format != 0 && format[i] != 0)
	{
		j = 0;
		while (fun2[j].op != 0)
		{
			if (fun2[j].op[0] == format[i])
			{
				printf("%s", p1);
				fun2[j].f(checker);
				p1 = p2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(checker);
}
