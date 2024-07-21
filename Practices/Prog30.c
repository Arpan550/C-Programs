#include<stdio.h>

int sumOfProperDivisors(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}
int isAbundant(int num){
    if(sumOfProperDivisors(num)>num){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    printf("Factors of the num %d are: ", num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d, ",i);
        }
    }
    return 0;
}

