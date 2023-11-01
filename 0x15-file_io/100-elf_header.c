#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header_info(int fd);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
        exit(98);
    }

    print_elf_header_info(fd);

    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot close file %s\n", argv[1]);
        exit(98);
    }

    return 0;
}

void print_elf_header_info(int fd) {
    Elf32_Ehdr header32;
    Elf64_Ehdr header64;

    if (read(fd, &header32, sizeof(header32)) == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
        exit(98);
    }

    if (header32.e_ident[EI_MAG0] != ELFMAG0 || header32.e_ident[EI_MAG1] != ELFMAG1 ||
        header32.e_ident[EI_MAG2] != ELFMAG2 || header32.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot rewind file\n");
        exit(98);
    }

    if (read(fd, &header64, sizeof(header64)) == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header64.e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", (header64.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header64.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header64.e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header64.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", header64.e_ident[EI_OSABI]);
    }

    printf("  ABI Version:                       %d\n", header64.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header64.e_type) {
        case ET_NONE:
            printf("NONE (None)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", header64.e_type);
    }

    printf("  Entry point address:               %#lx\n", header64.e_entry);
}
