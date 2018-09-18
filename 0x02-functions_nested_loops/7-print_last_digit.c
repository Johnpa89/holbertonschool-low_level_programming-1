#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int pld)
{
        int nld = (pld * ((pld > 0) - (pld < 0)));

        _putchar((nld%10) + '0');
}
