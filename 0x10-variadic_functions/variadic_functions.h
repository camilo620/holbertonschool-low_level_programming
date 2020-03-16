#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct function - Struct type of functions
 *
 * @op: The type of function
 * @f: The function
 */
typedef struct function
{
	char *op;
	void (*f)();
} fun;

#endif
