#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Holberton\n";
	int i;

	for (i = 0; i <= 11; i++)
	{
		_putchar(*sh);
		sh++;
	}

	return (0);
}
