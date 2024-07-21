#include <stdio.h>

int decimalToOctal(int num){
    int octal[32];
    int sum=0, pos=0;

    while(num!=0){
        octal[pos++]=num%8;
        num/=8;
    }
    for(int i=pos-1;i>=0;i--){
        sum=sum*10+octal[i];
    }
    return sum;
}
int main() {
    int num;
    
    printf("Enter decimal number: ");
    scanf("%d", &num);
 
    printf("Corresponding octal num: %d", decimalToOctal(num));
    
    return 0;
}
