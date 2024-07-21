#include<stdio.h>


int main(){
    int srange, erange, sum=0;
    printf("enter the start and end of the range: ");
    scanf("%d %d", &srange, &erange);

    for(int i=srange;i<=erange;i++){
        sum+=i;
    }
    printf("sum of natural numbers between %d and %d are: %d",srange,erange,sum);
    return 0;
}

