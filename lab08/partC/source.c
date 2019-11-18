
/*
    source.c
    Lab 07 C
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include "header.h"

float getCostToFill(float pricePerGallon, int tankCapacity){
    // Assuming the tank is empty
    return pricePerGallon*tankCapacity;
}

void printStats(float pricePerGallon, int tankCapacity, float costToFill){
    printf("Price Per Gallon: $%.2f | Tank Capacity: %d Gallons | Cost to Fill Tank: $%.2f\n",
     pricePerGallon, tankCapacity, costToFill);
}

void setCostToFill(float pricePerGallon, int tankCapacity, float *costToFill){
    *costToFill = getCostToFill(pricePerGallon, tankCapacity);
}

void inputPriceAndTank(float *pricePerGallon, int *tankCapacity){

    printf("Please input a positive float as a price per gallon of gas:\n");

    float valuePrice;
    while(1) {
        
        int result = scanf("%f", &valuePrice);
        if(result == 1){

            if(valuePrice >= 0){

                printf("Please input a positive int as the tank capacity:\n");

                int valueTank;
                while(1) {
                    
                    int result = scanf("%d", &valueTank);
                    if(result == 1){
                        
                        if(valueTank >= 0){
                            *pricePerGallon = valuePrice;
                            *tankCapacity = valueTank;
                            return;
                        }

                    } else {
                        scanf("%*s");
                    }
                    printf("Invalid input! Must input a positive int.\n");
                }

            }

        } else {
            scanf("%*s");
        }
        printf("Invalid input! Must input a positive float.\n");
    }

}