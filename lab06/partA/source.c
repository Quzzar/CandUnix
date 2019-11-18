
/*
    source.c
    Lab 06 A
    Aaron Cassar
    11/10/19
*/

#include <stdio.h>
#include "header.h"

double getVolume(double radius){
    return 4.0/3.0 * PI * radius * radius * radius;
}

double getSurfaceArea(double radius){
    return 4.0 * PI * radius * radius;
}

double inputRadius() {

    double radius = -1;
    while(1) {

        int result = scanf("%lf", &radius);

        if(result == 1){
            if(radius >= 0){
                return radius;
            }
        } else {
            scanf("%*s");
        }
        printf("Invalid input! Must input a positive double.\n");
    }

}
