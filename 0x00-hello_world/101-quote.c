#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 in this case (Success)
 */
int main(void)
{
int D = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", D);
return (1);
}
