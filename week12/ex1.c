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
#include <stdio.h>

int main() {
    int rd = open("dev/random",O_RDONLY);
    unsigned char  rs[20];
    read(rd,rs, sizeof(rs));
    for (int i = 0; i < sizeof(rs); i++){
        printf("%c",rs[i]);
    }
    printf("\n");
}
