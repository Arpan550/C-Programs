#include<stdio.h>

int GCD(int, int);

int main(){
    int num1, num2;
    printf("enter two num: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is: %d", num1,num2, GCD(num1,num2));
    return 0;
}

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
