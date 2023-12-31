#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_SIZE 1024

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
char er_0[] = "Usage: cp file_from file_to\n";
char er_1[] = "Error: Can't read from file ";
char er_2[] = "Error: Can't write to ";
char er_3[] = "Error: Can't close fd ";

if (argc != 3)
dprintf(STDERR_FILENO, "%s", er_0), exit(97);
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "%s%s\n", er_1, file_from), exit(98);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (fd_to == -1)
dprintf(STDERR_FILENO, "%s%s\n", er_2, file_to), exit(99);
while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
b_written = write(fd_to, buffer, r);
if (b_written == -1)
dprintf(STDERR_FILENO, "%s%s\n", er_2, file_to), exit(99);
}
if (r == -1)
dprintf(STDERR_FILENO, "%s%s\n", er_1, file_from), exit(98);
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "%s%d\n", er_3, fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "%s%d\n", er_3, fd_to), exit(100);
return (0);
}
