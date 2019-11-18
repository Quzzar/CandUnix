/*
    intascii.c
    Lab 05
    Aaron Cassar
    11/2/19
*/

#include <stdio.h>

#define MIN_ASCII 32
#define MAX_ASCII 126
#define ERROR_CODE -1

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

int main (int args, char* argv[]) {

    const int MIN_NUM = 95;
    const int MAX_NUM = 103;

    int status = printRange(MIN_NUM, MAX_NUM);

    if(status == ERROR_CODE){
        printf("ERROR during execution. Program run unsuccessfully!\n");
    } else {
        printf("Program Run Successfully!\n");
    }
    return status;

}