#include<stdio.h>

int fact(int num){
    if(num==0 || num==1){
        return 1;
    } else{
        return num*fact(num-1);
    }
}

int isstrong(int num){
    int noOfDigits=0, temp1=num, temp2=num, sum=0;
    while(temp1!=0){
        noOfDigits++;
        temp1/=10;
    }
    while(temp2!=0){
        sum+=fact(temp2%10);
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

    if(isstrong(num)){
        printf("strong(krishnamurthy number)");
    } else{
        printf("Not a strong");
    }
    return 0;
}

