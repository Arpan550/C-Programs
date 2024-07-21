#include<stdio.h>

int main(){
    int num1, num2;
    printf("enter two num: ");
    scanf("%d %d", &num1, &num2);

    printf("A: %d, B:%d\n", num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;

    printf("A: %d, B:%d\n", num1,num2);
    return 0;
}
