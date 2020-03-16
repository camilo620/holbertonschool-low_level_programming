#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to separate
 * @n: number of arguments
 * @...: arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *point;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		point = va_arg(string, char *);
		if (point != 0)
			printf("%s", point);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}
