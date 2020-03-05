#include "holberton.h"
#include <stdio.h>

char *lalari(char *dest, char *src);

char *lalari(char *dest, char *src)
{
        int a;
        int b;

        for (a = 0; src[a] != 0; a++)
        {
        }
        for (b = 0; b < a; b++)
        {
                dest[b] = src[b];
        }

        if (b == a)
        {
                dest[b] = '\0';
        }

        return (dest);
}

int main(void)
{
	    char s1[98];
	        char *p;

		    p = lalari(s1, "First, solve the problem. Then, write the code\n");
		        printf("%s", s1);
			    printf("%s", p);
			        return (0);
}
