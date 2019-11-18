
/*
    main.c
    Lab 06 A
    Aaron Cassar
    11/10/19
*/

#include <stdio.h>
#include "header.h"

int main (void) {

    double r = inputRadius();
    double sphereVolume = getVolume(r);
    double surfaceArea = getSurfaceArea(r);

    printf("The radius is %.2f, the sphere volume is %.2f, and the surface area is %.2f.", r, sphereVolume, surfaceArea);

    return 0;

}