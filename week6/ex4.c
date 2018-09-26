//
// Created by root on 9/26/18.
//

#include <signal.h>
#include <stdio.h>
#include <zconf.h>

void killz(){
    printf("\nKABO0M! Your program is killed\n");
}
void stope4(){
    printf("\nKABO0M! Your program is killed\n");
}
void usradbIn(){
    printf("\nKABO0M! Your program is killed\n");
}

int main (){

    signal(SIGKILL,killz);
    //printf("C-mon, press Cntrl+c\n");
    printf("%d\n",getpid());
    signal(SIGSTOP,stope4);
    signal(SIGUSR1,usradbIn);
    sleep(10);
    return 0;
}
