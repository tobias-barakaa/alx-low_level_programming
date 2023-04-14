#include "main.h"

/**
 *  create_file - file and write inside
 * @filename:first argu parametre
 * @text_content: second arg
 * Return: one or negative one
 */
int create_file(const char *filename, char *text_content)
{

	int file_data_elem_data_name;
	int count_iterate;
	int read_only_write;

	if (!filename)
    {
		return (-1);
    }

	file_data_elem_data_name = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_data_elem_data_name == -1)
    {
		return (-1);
    }

	if (!text_content)
    {
		text_content = "";
    }

	for (count_iterate = 0; text_content[count_iterate]; count_iterate++);

	read_only_write = write(file_data_elem_data_name, text_content, count_iterate);

	if (read_only_write == -1)
		return (-1);

	close(file_data_elem_data_name);

	return (1);


}
