#include<stdio.h>

int sumofProperDivisors(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}

int isperfect(int num){
    return (sumofProperDivisors(num)==num);
}
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    if(isperfect(num)){
        printf("perfect");
    } else{
        printf("Not a perfect");
    }
    return 0;
}

