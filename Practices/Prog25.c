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

int isamicable(int num1, int num2){
    if(sumofProperDivisors(num1)==num2 && sumofProperDivisors(num2)==num1){
        return 1;
    }
    return 0;
}
int main(){
    int num1, num2;
    printf("enter two num: ");
    scanf("%d %d", &num1, &num2);

    if(isamicable(num1, num2)){
        printf("amicable(friendly pair)");
    } else{
        printf("Not a amicable");
    }
    return 0;
}

