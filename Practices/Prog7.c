#include<stdio.h>
#include <math.h> 
#define PI 3.14

int main(){
    float rad;
    printf("enter radius of the circle: ");
    scanf("%f", &rad);

    double area=PI*pow(rad, 2);
    printf("Area: %lf",area);
    return 0;
}
