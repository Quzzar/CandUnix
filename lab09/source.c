
/*
    source.c
    Lab 09
    Aaron Cassar
    11/16/19
*/

#include <stdio.h>
#include "header.h"

void printCar(Car* c){
    printf("Model: %s   Year: %d    Rate: $%.2f\n", c->model, c->year, c->rate);
}

int inputCar(Car* c){

    int result = scanf("%100s %d %f", c->model, &(c->year), &(c->rate));
    if(result == 3){
        return 0;
    } else {
        return 3;
    }

}

int createCars(int numCars, Car** cars){
    int i;
    for(i = 0; i < numCars; i++){
        int result = inputCar(cars[i]);
        if(result != 0){
            return 1;
        }
    }
    return 0;
}

void listCars(int numCars, Car** cars, float rentalRate){
    int i;
    for(i = 0; i < numCars; i++){
        if(cars[i]->rate <= rentalRate){
            printCar(cars[i]);
        }
    }
}

