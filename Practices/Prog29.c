#include<stdio.h>

double power(double base, int exp){
    if(exp==0){
        return 1;
    }
    return base*power(base, exp-1);
}
int main(){
    double base;
    int exponent;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%lf power of %d: %lf", base, exponent, power(base, exponent));
    return 0;
}

