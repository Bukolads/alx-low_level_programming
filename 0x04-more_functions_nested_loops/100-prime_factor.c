#include <stdio.h>

/**
 * main - prime numbers
 * Return: Always 0.
 */

long int x = 612852475143;
long int py;
for (py = 2; py < x; py++)
{
	if (x % py == 0)
	{
		x = x / py;
	}
	printf("%ld\n", py);
	return (0);
}
