#include<stdio.h>

int ispalindrome(int num){
    int temp=num, rev=0;
    while(num!=0){
        rev=rev*10+(num%10);
        num/=10;
    }
    if(rev==temp){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);

    if(ispalindrome(num)){
        printf("palindrome");
    } else{
        printf("Not a palindrome");
    }
    return 0;
}

