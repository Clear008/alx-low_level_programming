#include <elf.h>
#include "main.h"

/**
* print_ELF_Magic - print magic number
* @e_ident: Elf identifier
* return: no return is a void func.
*/

void print_ELF_Magic(const unsigned char *e_ident)
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
 * print_ELF_Class - print ELF class.
 * @e_ident: ELF identifier.
 */
void print_ELF_Class(const unsigned char *e_ident)
{
printf("  Class:                             ");
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
else if (e_ident[EI_CLASS] == ELFCLASSNONE)
printf("Invalid class\n");
}
/**
 * print_ELF_Data - print ELF data format.
 * @e_ident: ELF identifier.
 */
void print_ELF_Data(const unsigned char *e_ident)
{
printf("  Data:                              ");
if (e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (e_ident[EI_DATA] == ELFDATA2MSB)
{
printf("2's complement, big endian\n");
}
else if (e_ident[EI_DATA] == ELFDATANONE)
{
printf("Invalid data encoding\n");
}
}
/**
* print_ELF_Version - print ELF version .
* @e_ident: ELF identifier.
*/
void print_ELF_Version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 * print_ELF_OsAbi - print the OSABI.
 * @e_ident: ELF identifier.
 */
void print_ELF_OsAbi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
if (e_ident[EI_OSABI] == ELFOSABI_NONE)
printf("UNIX - System V\n");
else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (e_ident[EI_OSABI] == ELFOSABI_AIX)
printf("UNIX - AIX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
/**
 * print_ELF_Abiv - function that print the ABI version
 * @e_ident: the ELF identifier.
 */

void print_ELF_Abiv(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n",
e_ident[EI_ABIVERSION]);
}

/**
* print_ELF_type - print the type
* @e_ident: the ELF identifier.
* @e_type: a data
*/

void print_ELF_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf("  Type:                              ");
if (e_type == ET_NONE)
printf("NONE (None)\n");
else if (e_type == ET_REL)
printf("REL (Relocatable file)\n");
else if (e_type == ET_EXEC)
printf("EXEC (Executable file)\n");
else if (e_type == ET_DYN)
printf("DYN (Shared object file)\n");
else if (e_type == ET_CORE)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", e_type);
}

/**
* print_ELF_entry - ELF entry
* @e_ident: the ELF identifier.
* @e_entry: a data
*/

void print_ELF_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
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
Elf64_Ehdr h;

if (argc != 2)
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]), exit(98);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(98);

r = read(fd, &h, sizeof(Elf64_Ehdr));
if (r == -1)
{
	perror("Error: Read failed");
close(fd);
exit(98);
}
if (h.e_ident[0] == 0x7F && h.e_ident[1] == 'E' &&
h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
{
printf("ELF Header:\n");
print_ELF_Magic(h.e_ident);
print_ELF_Class(h.e_ident);
print_ELF_Data(h.e_ident);
print_ELF_Version(h.e_ident);
print_ELF_OsAbi(h.e_ident);
print_ELF_Abiv(h.e_ident);
print_ELF_type(h.e_type, h.e_ident);
print_ELF_entry(h.e_entry, h.e_ident);
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

