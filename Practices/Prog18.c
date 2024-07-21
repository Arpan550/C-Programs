#include<stdio.h>

int fibb(int num){
    if(num==0 || num==1){
        return num;
    }
    return fibb(num-1)+fibb(num-2);
}
int main(){
    int term;
    printf("enter the num: ");
    scanf("%d", &term);

    printf("Fibonacci series upto %d terms: \n");
    for(int i=0;i<term;i++){
        printf("%d ", fibb(i));
    }
    return 0;
}

