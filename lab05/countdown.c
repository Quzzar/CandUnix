/*
    countdown.c
    Lab 05
    Aaron Cassar
    11/2/19
*/

#include <stdio.h>
#define MAX_COUNT 10

int main (int args, char* argv[]) {

    for (int i = MAX_COUNT; i > 0; i--) {
        printf("%3d\n", i);
    }
    printf("BLAST OFF\n");

    return 0;
}