#include "holberton.h"
/**
 * main - Entry Point
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_from, close_to, rd_from, wr_err;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}

	rd_from = read(file_from, buf, 1024);
	if (rd_from == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

	wr_err = write(file_to, buf, rd_from);
	if (wr_err == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}

	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from == -1 || close_to == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (1);
}
