#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 *
 * Return: The result
 */

int main(void)
{
	unsigned long int n, c = 612852475143;
	unsigned long int root = (int)(sqrt(612852475143));
	
	for (n = 3; n <= root; n++)
	{
		while (c % n == 0 && c != n)
		{
			c /= n;
		}
	}
	printf("%lu\n", c);
	return (0);
}
