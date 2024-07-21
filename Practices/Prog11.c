#include<stdio.h>


int main(){
    int num1, num2,num3;
    printf("enter three num: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    (num1>num2 && num1>num3)?printf("%dis greatest", num1):((num2>num3)?printf("%d is greatest", num2):printf("%d is greatest", num3));
    return 0;
}

