//
// Created by root on 9/26/18.
//

#include <stdio.h>
#include <zconf.h>
#include <string.h>


int main(int argc, char const *argv[]) {
    int pipe_ar[2];

    char* a = "priemnbIi";
    char b[10] = "";
    pipe(pipe_ar);
    pid_t pid = fork();
        if (pid==0) {
            read(pipe_ar[0],b, sizeof(b));
            printf("I'm the only child with pid = %d and I know from my parent that I am %s\n", getpid(), b);

        }
        else{
            write(pipe_ar[1],a, strlen(a));

    }
    return 0;
}