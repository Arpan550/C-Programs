#include<stdio.h>


int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    int noOfDigits=0;

    while(num!=0){
        noOfDigits++;
        num/=10;
    }
    printf("no of digits in %d is : %d", num, noOfDigits);
    return 0;
}

