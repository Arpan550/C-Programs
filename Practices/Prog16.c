#include<stdio.h>


int main(){
    int num, rev;
    printf("enter the num: ");
    scanf("%d", &num);

    int noOfDigits=0;

    while(num!=0){
        rev=rev*10+(num%10);
        num/=10;
    }
    printf("Reverse of the %d is : %d", num,rev);
    return 0;
}

