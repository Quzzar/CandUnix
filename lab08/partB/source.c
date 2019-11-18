
/*
    source.c
    Lab 07 B
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include "header.h"

int testNumber(int test, int max){
    if(test > max){
        test = max;
        return 1;
    }
    return 0;
}

int inputInt() {

    printf("Please input an int:\n");

    int value;
    while(1) {
        
        int result = scanf("%d", &value);

        if(result == 1){
            return value;
        } else {
            scanf("%*s");
        }
        printf("Invalid input! Must input an int.\n");
    }

}
