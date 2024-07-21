#include<stdio.h>
#include <math.h>

int isArmstrong(int num){
    int noOfDigits=0, sum=0;
    int temp1=num, temp2=num;

    while(temp1!=0){
        noOfDigits++;
        temp1/=10;
    }

    while(temp2!=0){
        sum+=pow(temp2%10, noOfDigits);
        temp2/=10;
    }
    if(sum==num){
        return 1;
    }
    return 0;
}
int main(){
    int srange, erange, sum=0;
    printf("enter the start and end of the range: ");
    scanf("%d %d", &srange, &erange);

    printf("Armstrong numbers in the range from %d to %d: ", srange, erange);
    for(int i=srange;i<=erange;i++){
        if(isArmstrong(i)){
            printf("%d, ",i);
        }
    }
    return 0;
}

