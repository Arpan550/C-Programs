#include <stdio.h>


int main() {
    int num, temp=0, rev=0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num!=0){
        int rem=num%10;
        if(rem==0){
            temp=temp*10+1;
        } else{
            temp=temp*10+rem;
        }
        num/=10;
    }

    while(temp!=0){
        rev=rev*10+(temp%10);
        temp/=10;
    }
    printf("Ans: %d", rev);
    
    return 0;
}
