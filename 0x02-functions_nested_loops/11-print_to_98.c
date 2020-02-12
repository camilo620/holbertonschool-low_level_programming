#include <stdio.h>
#include "holberton.h"
/**
  * print_to_98 - prints all numbers from a given parameter until 98
  *
  * Return: void
  *
  *@n: parameter given
  *
  */

void print_to_98(int n)
{
	int number = n;

	if (number < 98)
		while (number <= 98)
		{
			if (number == 98)
			{
				printf("%d\n", number);
			}

			else
			{
				printf("%d, ", number);
			}
			number++;
		}
	else if (number > 98)
		while (number >= 98)
		{
			if (number == 98)
			{
				printf("%d\n", number);
			}
			else
			{
				printf("%d, ", number);
			}
			number--;
		}
	else
		printf("%d\n", number);
}
