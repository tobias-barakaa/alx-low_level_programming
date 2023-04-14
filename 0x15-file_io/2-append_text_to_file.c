#include "main.h"

/**
* append_text_to_file - append files
* @ filename: first arg param
* @text_content: seond arg
* Return: value
*/

int append_text_to_file(const char *filename, char *text_content)
{
int file_destination, appen_character, len_string = 0;

if (filename == NULL)
{
return (-1);
}
file_destination = open(filename, O_WRONLY | O_APPEND);
if (file_destination == -1)
{
return (-1);
}
if (text_content)
{
while (text_content[len_string])
len_string++;
appen_character = write(file_destination, text_content, len_string);
if (appen_character != len_string)
return (-1);
}
close(file_destination);
return (1);
}
