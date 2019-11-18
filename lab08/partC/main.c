
/*
    main.c
    Lab 07 C
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include "header.h"

int main (void) {

    float pricePerGallon;
    int tankCapacity;
    float costToFill;

    inputPriceAndTank(&pricePerGallon, &tankCapacity);
    setCostToFill(pricePerGallon, tankCapacity, &costToFill);
    printStats(pricePerGallon, tankCapacity, costToFill);

    return 0;

}