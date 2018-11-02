#include "holberton.h"
/**
 * get_endianness - Entry Point
 * Return: 0
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);

	return (0);
}
