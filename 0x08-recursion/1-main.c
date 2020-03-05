#include "holberton.h"


void recursion(char *s)
{
        if (*s != 0)
        {
                s++;
                recursion(s);
                _putchar(s - 1);
        }
}

int main(void)
{
	    recursion("\nColton Walker");
	        return (0);
}
