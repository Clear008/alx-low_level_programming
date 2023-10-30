#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: file name
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int filed, r;
char *buff;
if (filename == NULL)
	return (0);

filed = open(filename, O_RDONLY);
if (filed == -1)
return (0);


buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return (0);

r = read(filed, buff, letters);
if (r == -1)
return (0);

write(STDOUT_FILENO, buff, r);

close(filed);

free(buff);

return (r);
}
