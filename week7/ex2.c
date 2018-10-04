//
// Created by root on 10/4/18.
//


#include <stdio.h>
#include <zconf.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    int n;
    scanf("%i",&n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i]=i;
        printf("%i\n",arr[i]);
    }
    int * arr[n] = malloc(2*n* sizeof(int));
    for (int i = 0; i < n; ++i) {
        printf("%i\n",arr[i]);
    }
    free(arr);
    return 0;
}

