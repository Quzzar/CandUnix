#ifndef _HEADER_H_
#define _HEADER_H_

float getCostToFill(float pricePerGallon, int tankCapacity);
void printStats(float pricePerGallon, int tankCapacity, float costToFill);
void setCostToFill(float pricePerGallon, int tankCapacity, float *costToFill);
void inputPriceAndTank(float *pricePerGallon, int *tankCapacity);

#endif