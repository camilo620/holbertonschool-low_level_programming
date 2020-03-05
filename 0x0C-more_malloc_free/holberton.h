#ifndef HOLBERTON_H
#define HOLBERTON_H

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

char *argstostr(int ac, char **av);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

char *str_concat(char *s1, char *s2);

char *_strdup(char *str);

char *create_array(unsigned int size, char c);

int recursion(char *s);

int is_palindrome(char *s);

int is_prime_number(int n);

int _sqrt_recursion(int n);

int _pow_recursion(int x, int y);

int factorial(int n);

int _strlen_recursion(char *s);

void _print_rev_recursion(char *s);

void _puts_recursion(char *s);

void print_chessboard(char (*a)[8]);

char *_strstr(char *haystack, char *needle);

char *_strpbrk(char *s, char *accept);

unsigned int _strspn(char *s, char *accept);

char *_strchr(char *s, char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memset(char *s, char b, unsigned int n);

char *rot13(char *s);

char *leet(char *s);

char *cap_string(char *s);

char *string_toupper(char *s);

void reverse_array(int *a, int n);

int _strcmp(char *s1, char *s2);

char *_strncpy(char *dest, char *src, int n);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

char *_strcpy(char *dest, char *src);

int print_sign(int n);

int _abs(int);

void puts_half(char *str);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

int _isupper(int c);

void print_most_numbers(void);

int mul(int a, int b);

int _isdigit(int c);

void print_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void print_array(int *a, int n);

int _atoi(char *s);

#endif
