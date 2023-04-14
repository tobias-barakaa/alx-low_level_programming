#include "main.h"

/**
 *  create_file - file and write inside
 * @filename:first argu parametre
 * @text_content: second arg
 * Return: one or negative one
 */
int create_file(const char *filename, char *text_content)
{
	int file_data, string_leng, data_write;

	if (filename == NULL)
		return (-1);

	file_data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (file_data == -1)
		return (-1);
	if (text_content != NULL)
	for (string_leng = 0; text_content[string_leng] != '\0'; string_leng++)
		data_write = write(file_data, text_content, string_leng);
	if (data_write == -1)
		return (-1);
	close(file_data);
	return (1);
}
