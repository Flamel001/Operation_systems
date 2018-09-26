//
// Created by root on 9/26/18.
//

#include <signal.h>
#include <stdio.h>
#include <zconf.h>

void kabom(){
    printf("\nKABO0M! Your program is interrupted\n");
}

int main (){

    signal(SIGINT,kabom);
    printf("C-mon, press Cntrl+c\n");
    sleep(3);
    return 0;
}