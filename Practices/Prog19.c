#include<stdio.h>

int main(){
    int year;
    printf("enter the num: ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("Leapyear");
    } else{
        printf("Not a leapyear");
    }
    return 0;
}

