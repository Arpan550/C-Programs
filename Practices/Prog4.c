#include<stdio.h>

int main(){
    int num;
    printf("enter a num: ");
    scanf("%d", &num);

    if(num>0){
        printf("positive");
    } else{
        printf("Negative");
    }
    return 0;
}
