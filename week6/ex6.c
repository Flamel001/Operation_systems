//
// Created by root on 9/26/18.
//

#include <stdio.h>
#include <zconf.h>
#include <string.h>
#include <stdlib.h>
#include <wait.h>


int main(int argc, char const *argv[]) {
    int pipe_ar[2];
    pid_t child[2];
    pipe(pipe_ar);
    child[0] = fork();
    if (child[0]==0) {
        sleep(2);
        read(pipe_ar[0],&child[1], sizeof(child[1]));
        printf("childid[1]=%d\n",child[1]);
        //waitpid(child[1],0,0);
        printf("CHILD1: I'm the first child with pid = %d. This child with pid = %d is a monster."
               " We must kill him. I'll do it by my own, don't look\n", getpid(),child[1]);
        kill(child[1],SIGSTOP);
        printf("CHILD1: We did it, dad. child with pid = %d will never ever disturb us."
               " Good bye, dad, I'm going to save the world from other monsters. Remember me as child with pid =%d\n", child[1],getpid());

        exit(1);



    }
    else{
        printf("DAD: The first child with pid = %d is BORN. It's time for another one\n", child[0]);
        //pid_t pid2 = fork();
        child[1]=fork();
        if (child[1]!=0){
            //child[1] = child[1];
            printf("DAD: The second child with pid = %d is BORN. But it looks strange. Oh, wait, he is trying to say something\n", child[1]);
            printf("childid[1]=%d\n",child[1]);
            write(pipe_ar[1],&child[1], sizeof(child[1]));
            waitpid(child[0],1,0);
            printf("DAD: LoL, wtf's happened\n");

        }
        else{
            printf("CHILD2: I'm the second child with pid = %d. I love windows, but I hate coffee and risotto\n", getpid());
            //exit();
            while (1){
                printf("AUTISM-AUTISM\n");
                sleep(1);
            }

        }

    }
    return 0;
}