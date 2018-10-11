#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

int main() {
    while (1){
        int * ten_mb = malloc(1*1024*1024*10);
        memset(ten_mb,0,1*1024*1024*10);
        sleep(1);

    }
}