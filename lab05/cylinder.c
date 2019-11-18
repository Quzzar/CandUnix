/*
    cylinder.c
    Lab 05
    Aaron Cassar
    11/2/19
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926

double getVolume(double r, double h) {
    return PI*r*r*h;
}

double getSurfaceArea(double r, double h){
    return 2*PI*r*r + 2*PI*r*h;
}

int main (int args, char* argv[]) {

    const double h = 5.77;
    const double r = 6.1;

    if (h <= 0 || r <= 0){
        printf("Radius and Height must both be greater than zero!\n");
        exit(1);
    }

    if(h == r){
        printf("Radius and Height are equal to each other!\n");
    } else {
        if(h > r){
            printf("Height (%.1f) is larger than Radius (%.1f).\n", h, r);
        } else {
            printf("Radius (%.1f) is larger than Height (%.1f).\n", r, h);
        }
    }
    
    double vol = getVolume(r, h);
    double surArea = getSurfaceArea(r, h);

    printf("Radius: %.4f | Volume: %.4f | Surface Area: %.4f\n", r, vol, surArea);

    return 0;

}