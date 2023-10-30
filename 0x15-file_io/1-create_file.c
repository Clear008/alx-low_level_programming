
#include "main.h"
/**
 * create_file - function that create a file
 * @filename: file name
 * @text_content: stores text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int filed, len, b_written;

if (filename == NULL)
return (-1);
filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (filed == -1)
return (-1);

if (text_content == NULL)
{
len = 0;
while (text_content[len] != '\0')
{
len++;
}
}
b_written = write(filed, text_content, len);
if (b_written == -1)
{
close(filed);
return (-1);
}
}
