
#include "main.h"
#include <stdio.h>

/**
 * read_file_error_function - file open check
 * @to_get_from: from.
 * @to_get_to: to.
 * @argv: arguments 
 * Return: zero.
 */
void read_file_error_function(int to_get_from, int to_get_to, char *argv[])
{
	if (to_get_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to_get_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int to_get_from, to_get_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp to_get_from to_get_to");
		exit(97);
	}

	to_get_from = open(argv[1], O_RDONLY);
	to_get_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	read_file_error_function(to_get_from, to_get_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(to_get_from, buf, 1024);
		if (nchars == -1)
			read_file_error_function(-1, 0, argv);
		nwr = write(to_get_to, buf, nchars);
		if (nwr == -1)
			read_file_error_function(0, -1, argv);
	}

	err_close = close(to_get_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_get_from);
		exit(100);
	}

	err_close = close(to_get_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_get_from);
		exit(100);
	}
	return (0);
}

