#include <string.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_result;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
{
return (-1);
}
write_result = write(file_descriptor, text_content, strlen(text_content));
close(file_descriptor);
if (write_result == -1)
{
return (-1);
}
return (1);
}
