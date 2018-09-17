#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int co = 0;

	do
	{
	for(n = 'a'; n <= 'z'; n++)
		_putchar(n);
		_putchar('\n');
		co++;
	}
	while (co <= 10);
}
