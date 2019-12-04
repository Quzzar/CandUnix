#ifndef _HEADER_H_
#define _HEADER_H_

#define NAME_SIZE 100

typedef struct {
   char model[NAME_SIZE];
   int year;
   float rate;
} Car;

void printCar(Car* c);
int inputCar(Car* c);
int createCars(int numCars, Car** cars);
void listCars(int numCars, Car** cars, float rentalRate);


#endif