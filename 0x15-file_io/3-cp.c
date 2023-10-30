#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 *main - check the code
 *@argv: array of command line argument
 *@argc: number of command line argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from, fd_to;
ssize_t r, b_written;
char buffer[BUFFER_SIZE];
char err0[] = "Usage: cp file_from file_to\n";
char err1[] = "Error: Can't read from file ";
char err2[] = "Error: Can't write to ";
char err3[] = "Error: Can't close fd ";
char err4[] = "Error: Can't close fd ";
if (argc != 3)
dprintf(STDERR_FILENO, "%s", err0), exit(97);
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "%s%s\n", err2, file_from), exit(98);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (fd_to == -1)
dprintf(STDERR_FILENO, "%s%s\n", err2, file_to), exit(99);
while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
b_written = write(fd_to, buffer, r);
if (b_written == -1)
dprintf(STDERR_FILENO, "%s%s\n", err2, file), exit(99);
}
if (r == -1)
dprintf(STDERR_FILENO, "%s%s\n", err1, file_from), exit(98);
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "%s%d\n", err3, fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "%s%d\n", err4, fd_to), exit(100);
return (0);
}
