#include<stdio.h>


int main(){
    int num1, num2;
    printf("enter two num: ");
    scanf("%d %d", &num1, &num2);

    (num1>num2)?printf("%dis greatest", num1):printf("%d is greatest", num2);
    return 0;
}

