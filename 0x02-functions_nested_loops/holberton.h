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
