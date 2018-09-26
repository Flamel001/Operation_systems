//
// Created by root on 9/26/18.
//

#include <stdio.h>
#include <zconf.h>
#include <string.h>
#include <signal.h>


int main(int argc, char const *argv[]) {
    int pipe_ar[2];

    char* a = "priemnbIi";
    char b[10] = "";
    pipe(pipe_ar);
    pid_t pid = fork();
    if (pid==0) {
        while (1){
            printf("Child: I'm alive!\n");
            sleep(1);
        }

    }
    else{
        sleep(10);
        kill(pid,SIGTERM);
        printf("Parent: No\n");
    }
    return 0;
}