#include "holberton.h"
void closer(int arg_files);
/**
 * main - Entry Point
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_from_r, wr_err;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	file_from_r = read(file_from, buf, 1024);

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	wr_err = write(file_to, buf, file_from_r);
	if (wr_err == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	closer(file_from);
	closer(file_to);
	return (1);
}

/**
 * closer - close with error
 * @arg_files: argv 1 or 2
 * Return: void
 */
void closer(int arg_files)
{
	int close_err;

	close_err = close(arg_files);

	if (close_err == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", arg_files);
		exit(100);
	}
}
