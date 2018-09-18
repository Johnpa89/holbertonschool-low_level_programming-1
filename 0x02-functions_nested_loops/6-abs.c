#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _abs(int ab)
{
	return ab * ((ab > 0) - (ab < 0));
}
