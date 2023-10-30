#include "main.h"
/**
 * append_text_to_file - function that append a text at the end of file
 * @filename: file name
 * @text_content: is text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, b_written, len;

if (filename == NULL)
return (-1);

filed = open(filename, O_WRONLY | O_APPEND);

if (filed == -1)
return (-1);

if (text_content != NULL)
{
len = 0;
while (text_content[len] != '\0')
{
len++;

}
b_written = write(filed, text_content, len);
if (b_written == -1)
return (-1);
}
close(filed);
return (1);
}
