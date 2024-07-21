#include<stdio.h>

int isPrime(int num){
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
    int srange, erange, sum=0;
    printf("enter the start and end of the range: ");
    scanf("%d %d", &srange, &erange);

    printf("Prime numbers in the range from %d to %d", srange, erange);
    for(int i=srange;i<=erange;i++){
        if(isPrime(i)){
            printf("%d, ",i);
        }
    }
    return 0;
}

