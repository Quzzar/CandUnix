
/*
    main.c
    Lab 06 B
    Aaron Cassar
    11/10/19
*/

#include <stdio.h>
#include "header.h"

int main (int args, char* argv[]) {
    
    int MIN_NUM = inputValue(MIN_ASCII, MAX_ASCII);
    int MAX_NUM = inputValue(MIN_NUM, MAX_ASCII);

    int status = printRange(MIN_NUM, MAX_NUM);

    if(status == ERROR_CODE){
        printf("ERROR during execution. Program run unsuccessfully!\n");
    } else {
        printf("Program Run Successfully!\n");
    }
    return status;

}