#include "main.h"

/**
 * read_textfile - write and print to POSIx
 * @filename: first argument
 * @letters: second argument
 * Return: return -1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int function_data, read_data_elem, write_elem_data;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	function_data = open(filename, O_RDWR);
	if (function_data == -1)
		return (0);
	read_data_elem = read(function_data, buffer, letters);
	if (read_data_elem == -1)
		return (0);
	write_elem_data = write(STDOUT_FILENO, buffer, read_data_elem);
	if (write_elem_data == -1)
		return (0);
	close(function_data);
	free(buffer);
	return (write_elem_data);
}
