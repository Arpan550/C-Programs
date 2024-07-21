#include<stdio.h>
#include<math.h>

int isarmstrong(int num){
    int noOfDigits=0, temp1=num, temp2=num, sum=0;
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
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    if(isarmstrong(num)){
        printf("armstrong");
    } else{
        printf("Not a armstrong");
    }
    return 0;
}

