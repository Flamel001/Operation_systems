//
// Created by root on 11/1/18.
//

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <fcntl.h>
#include <bits/fcntl-linux.h>
#include <zconf.h>

int main() {
    size_t strlength = strlen("This is a nice day");
    int fd = open("./ex1.txt", O_RDWR);
    struct stat buf;
    fstat(fd, &buf);
    ftruncate(fd, strlength);
    void * addr = mmap(0, strlength, PROT_WRITE, MAP_SHARED, fd, 0);
    memcpy(addr, "This is a nice day", strlength);
}
