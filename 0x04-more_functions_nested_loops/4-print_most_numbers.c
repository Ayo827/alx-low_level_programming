#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - check main
 * Description: Write a function that prints the numbers, from 0 to 9
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
