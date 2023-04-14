#include "main.h"

/**
 *  create_file - file and write inside
 * @filename:first argu parametre
 * @text_content: second arg
 * Return: one or negative one
 */
int create_file(const char *filename, char *text_content)
{

int file_data, loop_through;

	if (filename == NULL)
	{
		return (-1);
	}
	file_data = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file_data == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	for (loop_through = 0; text_content[loop_through]; loop_through++)
		;
	if (write(file_data, text_content, loop_through) == -1)
	{
		return (-1);
	}
	if (close(file_data) == -1)
		return (-1);
	return (1);
}
