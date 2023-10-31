#include <elf.h>
#include "main.h"

/**
* print_ELF_Magic - print magic number
* @e_ident: Elf identifier
* return: no return is a void func.
*/

void print_ELF_Magic(const unsigned char e_ident[EI_NIDENT])
{
int inx;
printf("  Magic:   ");
for (inx = 0; inx < EI_NIDENT; inx++)
{
printf("%02x ", e_ident[inx]);
}
printf("\n");
}
/**
 *main - check the code
 *@argv: array of command line argument
 *@argc: number of command line argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int fd, r;
unsigned char elf_magic[EI_NIDENT];
if (argc != 2)
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]), exit(98);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(98);

r = read(fd, elf_magic, EI_NIDENT);
if (r == -1)
{
	perror("Error: Read failed");
close(fd);
exit(98);
}
if (elf_magic[0] == 0x7F && elf_magic[1] == 'E' &&
elf_magic[2] == 'L' && elf_magic[3] == 'F')
{
printf("ELF Header:\n");
print_ELF_Magic(elf_magic);
}
else
{
fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
close(fd);
exit(98);
}
close(fd);

return (0);
}
