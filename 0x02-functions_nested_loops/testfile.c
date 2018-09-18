#include <stdio.h>

int main(void)
{
	char *sh = "Holberton\n";
	int i;

	for (i = 0; i <= 11; i++)
	{
		putchar(*sh);
		sh++;
	}

	return (0);
}
