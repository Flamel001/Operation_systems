#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <sys/resource.h>

int main() {
    struct rusage usage;
    while (1){
        int * ten_mb = malloc(sizeof(char)*1024*1024*10);
        memset(ten_mb,0,sizeof(char)*1024*1024*10);
        getrusage(RUSAGE_SELF,&usage);
        printf("Maximum resident set size: %d\n", usage.ru_maxrss);
        printf("Integral shared memory size: %d\n", usage.ru_ixrss);
        sleep(1);
    }
}