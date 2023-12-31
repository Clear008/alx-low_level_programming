#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_ELF_Magic(const unsigned char *e_ident);
void print_ELF_Class(const unsigned char *e_ident);
void print_ELF_Data(const unsigned char *e_ident);
void print_ELF_Version(unsigned char *e_ident);
void print_ELF_OsAbi(unsigned char *e_ident);
void print_ELF_Abiv(unsigned char *e_ident);
void print_ELF_type(unsigned int e_type, unsigned char *e_ident);
void print_ELF_entry(unsigned long int e_entry, unsigned char *e_ident);

#endif
