
/*
    main.c
    Lab 07 B
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include "header.h"

int main (void) {

    printf("You will first be inputting a max integer then a test integer.\n");
    int max = inputInt();
    int test = inputInt();

    int status = testNumber(test, max);

    if(status){
        printf("The input test value %d was changed to %d.\n", test, max);
    } else {
        printf("The input test value %d was not changed.\n", test);
    }

    return 0;

}