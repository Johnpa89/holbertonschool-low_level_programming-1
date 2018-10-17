#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = func res of get_op_func
 * argc: arguments
 * argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int one, two;
	char get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = *argv[2];
	
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((get_op == '/' || get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	
	printf("%d\n", (get_op_func(argv[2])(one, two)));
	return (0);
}
