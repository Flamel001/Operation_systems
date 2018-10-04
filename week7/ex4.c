//
// Created by root on 10/4/18.
//


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void* maCoolRealloc(void * ptr, size_t size) {
    if (size == 0)
        free(ptr);
    else {
        void *maCoolPointer = malloc(size);
        if (ptr == NULL)
            return maCoolPointer;
        else {
                memcpy(maCoolPointer, ptr, size);
            }
        }
    }


int main(int argc, char const *argv[]) {

    return 0;
}