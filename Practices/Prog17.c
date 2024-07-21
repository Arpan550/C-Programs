#include<stdio.h>

int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    int fact=1;

    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("factorial of %d is %d",num, fact);
    return 0;
}

