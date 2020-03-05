#include "holberton.h"

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
void string(char *str)
{
        int a;

        for (a = 0; str[a] != 0; a++)
        {
                _putchar(str[a]);
        }
        _putchar('\n');
}

int main(void)
{
	    char *str;

	        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
		    string(str);
		        return (0);
}
