
/*
    main.c
    Lab 09
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main (int argc, const char* argv[]) {

    if(argc != 3){
        fprintf(stderr, "Two command-line args are required!\n");
        return 1;
    }

    int numCars;
    if(sscanf(argv[1],"%d", &numCars) != 1){
        fprintf(stderr, "Could not convert first command-line arg into an int!\n");
        return 1;
    }

    float maxRentalRate;
    if(sscanf(argv[2],"%f", &maxRentalRate) != 1){
        fprintf(stderr, "Could not convert second command-line arg into a float!\n");
        return 1;
    }


    Car** cars;
    cars = malloc(numCars * sizeof(Car));

    int i;
    for(i = 0; i < numCars; i++){
        cars[i] = malloc(sizeof(Car));
    }

    if (!cars){
        fprintf(stderr, "Error, memory allocation failed!\n");
        return 1;
    }

    int result = createCars(numCars, cars);
    if(result != 0){
        fprintf(stderr, "Failed to populate Cars with data from input!\n");
        return result;
    }

    listCars(numCars, cars, maxRentalRate);

    // when finished working with the array, deallocate the memory
    free(cars);
    cars = NULL;

    return 0;

}