#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/* Function prototypes */
void display_elf_header(Elf64_Ehdr *header);
void display_magic(unsigned char *magic);
void display_class(unsigned char elf_class);
void display_data(unsigned char elf_data);
void display_version(unsigned char version);
void display_os_abi(unsigned char os_abi);
void display_abi_version(unsigned char abi_version);
void display_type(Elf64_Half elf_type);
void display_entry_point(Elf64_Addr entry_point);

/**
 * main - Entry point
 *
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	/*if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}*/
	
	(void)argc;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Cannot seek to the beginning of the file\n");
		close(fd);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
		close(fd);
		exit(98);
	}

	display_elf_header(&header);
	close(fd);
	return (0);
}

/**
 * display_elf_header - Display ELF header information
 *
 * @header: Pointer to ELF header structure
 */
void display_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	display_magic(header->e_ident);
	display_class(header->e_ident[EI_CLASS]);
	display_data(header->e_ident[EI_DATA]);
	display_version(header->e_ident[EI_VERSION]);
	display_os_abi(header->e_ident[EI_OSABI]);
	display_abi_version(header->e_ident[EI_ABIVERSION]);
	display_type(header->e_type);
	display_entry_point(header->e_entry);
}

/**
 * display_magic - Display magic bytes of ELF header
 *
 * @magic: Pointer to magic bytes array
 */
void display_magic(unsigned char *magic)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", magic[i]);

	printf("\n");
}

/**
 * display_class - Display ELF class
 *
 * @elf_class: ELF class value
 */
void display_class(unsigned char elf_class)
{
	printf("  Class:                             ");

	switch (elf_class)
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid ELF class\n");
			exit(98);
	}
}

/**
 * display_data - Display ELF data encoding
 *
 * @elf_data: ELF data encoding value
 */
void display_data(unsigned char elf_data)
{
	printf("  Data:                              ");

	switch (elf_data)
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			exit(98);
	}
}

/**
 * display_version - Display ELF header version
 *
 * @version: ELF header version
 */
void display_version(unsigned char version)
{
	printf("  Version:                           %d (current)\n", version);
}

/**
 * display_os_abi - Display OS/ABI
 *
 * @os_abi: OS/ABI value
 */
void display_os_abi(unsigned char os_abi)
{
	printf("  OS/ABI:                            ");

	switch (os_abi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		default:
			printf("Unknown OS/ABI\n");
			exit(98);
	}
}

/**
 * display_abi_version - Display ABI version
 *
 * @abi_version: ABI version value
 */
void display_abi_version(unsigned char abi_version)
{
	printf("  ABI Version:                       %d\n", abi_version);
}

/**
 * display_type - Display ELF file type
 *
 * @elf_type: ELF file type value
 */
void display_type(Elf64_Half elf_type)
{
	printf("  Type:                              ");

	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (Unknown)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		default:
			printf("Unknown ELF type\n");
			break;
	}
}

/**
 * display_entry_point - Display entry point address
 *
 * @entry_point: Entry point address value
 */
void display_entry_point(Elf64_Addr entry_point)
{
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)entry_point);
}
