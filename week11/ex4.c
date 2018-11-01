#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <fcntl.h>
#include <bits/fcntl-linux.h>
#include <zconf.h>
#include <stdio.h>
#include <malloc.h>

int main() {
    int fd_source = open("ex1.txt", O_RDWR);
    int fd_dest = open("ex1.memcpy.txt", O_RDWR);
    struct stat buf;
    fstat(fd_source, &buf);
    off_t strlength = buf.st_size;
    ftruncate(fd_dest, strlength);
    void* addr_from = mmap("ex1.txt", strlength,  PROT_READ, MAP_SHARED, fd_source, 0);
    void* addr_to = mmap("ex1.memcpy.txt", strlength, PROT_WRITE , MAP_SHARED, fd_dest, 0);
    memcpy(addr_to, addr_from, strlength);

    return 0;



}
