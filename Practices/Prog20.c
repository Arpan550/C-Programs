#include<stdio.h>

int isprime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    if(isprime(num)){
        printf("Prime");
    } else{
        printf("Not a prime");
    }
    return 0;
}

