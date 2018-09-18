#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int n;

	for(n = 'a'; n <= 'z'; n++)
		_putchar(n);
		_putchar('\n');
}

void print_alphabet_x10(void)
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

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int _isalpha(int c)
{
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}

int print_sign(int n)
{
        if (n > 0)
	{
                _putchar('+');
		return (1);
	}
        else if (n == 0)
	{
                _putchar('0');
		return (0);
	}
        else if (n < 0)
	{
                _putchar('-');
		return(-1);
	}
}

int _abs(int xy)
{
        return xy * ((xy > 0) - (xy < 0));
}

int print_last_digit(int pld)
{
	int nld = (pld * ((pld > 0) - (pld < 0)));

	_putchar((nld%10) + '0');
}
/*
void jack_bauer(void)
{
	int stopp = 0, done = 0, dtwo = 0, dthree = 0, dfour = 0;

	while (stopp = 0)
	{
		_putchar(done);
		_putchar(dtwo);
		_putchar(':');
		_putchar(dthree);
		_putchar(dfour);

		dfour++;

		if (dfour <= 9)
		{
			dthree += 1;
			dfour = 0;
		}

		if (dthree <= 6)
		{
			dtwo += 1;
			dthree = 0;
		}

		if (dtwo <= 9)
		{
			done += 1;
			dtwo = 0;
		}
		else if (done = 2)
		{
			dtwo += 1;
		}

		if (done <= 1)
		{
			dtwo = 0;
		}

		if (done == 2 && dtwo == 4)
		{
			stopp++;
		}
	}
*/
}
