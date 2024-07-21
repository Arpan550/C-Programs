#include<stdio.h>

int sumofdigits(int num){
    int sum=0;
    while (num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int isHarshad(int num){
    if(num%sumofdigits(num)==0){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    if(isHarshad(num)){
        printf("Harshad(Niven)");
    } else{
        printf("Not a Harshad");
    }
    return 0;
}

