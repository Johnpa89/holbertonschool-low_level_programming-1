#include <ctype.h>
#include "holberton.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int b_temp, rem, res = 0, base = 1;
	int i = 0;

	b_temp = atoi(b);

	while (b[i] != '\0')
	{
		if (!isdigit(b[i]))
			return (0);
		i++;
	}

	while (b_temp > 0)
	{
		rem = (b_temp % 10);
		res = res + rem * base;
		b_temp /= 10;
		base *= 2;
	}

	return (res);
}
