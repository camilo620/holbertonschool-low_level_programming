#include "holberton.h"
/**
   *
    *
     *
      *
       *
        *
	 *
	  *
	   *
	*
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int b = 0;
	int c;

	for (a = 0; s[a] != ' ' && s[a] != 0; a++)
	{
		for (c = 0; accept[c] != 0; c++)
		{
			if (s[a] == accept[c])
			{
				b++;
				break;
			}
		}
	}
	return (b);
}
