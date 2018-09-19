#include <stdio.h>
#include <stdlib.h>

void type_prompt(){
        printf("# ");
}


void read_command( char * command){
        scanf("%s",command);
}

int main(void){
        char command[255];
        while (1){
                type_prompt();
                fgets(command,255,stdin);
                system(command);
        }
        return 0;
}