#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define EI_NIDENT 16

/* Structure for the ELF header */
typedef struct elfhdr {
	uint8_t e_ident[EI_NIDENT]; /* ELF identification */
	uint16_t e_type;            /* Object file type */
	uint16_t e_machine;         /* Machine type */
	uint32_t e_version;         /* Object file version */
	uint64_t e_entry;           /* Entry point address */
	uint64_t e_phoff;           /* Program header offset */
	uint64_t e_shoff;           /* Section header offset */
	uint32_t e_flags;           /* Processor-specific flags */
	uint16_t e_ehsize;          /* ELF header size */
	uint16_t e_phentsize;       /* Size of program header entry */
	uint16_t e_phnum;           /* Number of program header entries */
	uint16_t e_shentsize;       /* Size of section header entry */
	uint16_t e_shnum;           /* Number of section header entries */
	uint16_t e_shstrndx;        /* Section name string table index */
} Elf64_Ehdr;

/* Function to print the ELF header */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	char *type = NULL;
	char *data = NULL;
	char *osabi = NULL;

	/* Determine the ELF class */
	switch (ehdr->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("Class:                             ELF32\n");
			break;
		case ELFCLASS64:
			printf("Class:                             ELF64\n");
			break;
		default:
			printf("Invalid ELF class\n");
			exit(98);
	}

	/* Determine the data encoding */
	switch (ehdr->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			data = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			data = "2's complement, big endian";
			break;
		default:
			printf("Invalid data encoding\n");
			exit(98);
	}
	
	/* Determine the OS/ABI */
	switch (ehdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			osabi = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			osabi = "UNIX - Solaris";
				break;
		case ELFOSABI_AIX:
			osabi = "UNIX - AIX";
			break;
		case ELFOSABI_IRIX:
			osabi = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
		       	osabi = "UNIX - FreeBSD";
			break;
		case ELFOSABI_OPENBSD:
			osabi = "UNIX - OpenBSD";
			break;
		default:
			osabi = "Unknown
