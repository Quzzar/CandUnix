
/*
    source.c
    Lab 06 B
    Aaron Cassar
    11/10/19
*/

#include <stdio.h>
#include "header.h"

int printASCII(int num){
    if(MIN_ASCII > num || num > MAX_ASCII){
        return ERROR_CODE;
    }
    printf("%-4d<%c>\n", num, num);
    return 0;
}

int printRange(int min, int max){
    for (int i = min; i <= max; i++) {
        int status = printASCII(i);
        if(status == ERROR_CODE){
            return ERROR_CODE;
        }
    }
    return 0;
}

int inputValue(int min, int max) {

    printf("Please input an int between %d and %d (inclusive):\n", min, max);

    int value;
    while(1) {
        
        int result = scanf("%d", &value);

        if(result == 1){
            if(min <= value && value <= max){
                return value;
            }
        } else {
            scanf("%*s");
        }
        printf("Invalid input! Must input an int between %d and %d (inclusive).\n", min, max);
    }

}
