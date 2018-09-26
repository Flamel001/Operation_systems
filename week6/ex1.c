//
// Created by root on 9/26/18.
//

#include <stdio.h>
#include <zconf.h>
#include <string.h>


int main(int argc, char const *argv[]) {
    int pipe_ar[2];
    char* a = "asd";
    char b[4];
    pipe(pipe_ar);
    write(pipe_ar[1],a, strlen(a));
    read(pipe_ar[0],b, sizeof(b));
    printf("%s\n",b);
    return 0;
}