#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>
/**
 * main - Entry point
 * DESCRIPTION: a program that displays the information contained
 * in the ELF header at the start of an ELF file
 * @argc: number of command line arguments passed to the program
 * @argv: arguments passed through command line
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY);
	int i;
	Elf64_Ehdr ehdr;
	ssize_t n = read(fd, &ehdr, sizeof(ehdr));
	char space[] = "                             ";

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	if (n == -1)
	{
		perror("read");
		exit(98);
	}
	if ((unsigned long int)n < sizeof(ehdr))
	{
		fprintf(stderr, "%s: file too short\n", argv[1]);
		exit(98);
	}
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "%s: not an ELF file\n", argv[1]);
		exit(98);
	}

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");

	printf("Class:%s%s\n", space, ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:%s%s\n", space, ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:%s%d (current)\n", space, ehdr.e_ident[EI_VERSION]);
	printf("ABI Version:%s%d\n", space, ehdr.e_ident[EI_ABIVERSION]);
	return (0);
}
