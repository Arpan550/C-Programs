#include <stdio.h>

int decimalToBinary(int num){
    int binary[32];
    int sum=0, pos=0;

    while(num!=0){
        binary[pos++]=num%2;
        num/=2;
    }
    for(int i=pos-1;i>=0;i--){
        sum=sum*10+binary[i];
    }
    return sum;
}
int main() {
    int num;
    
    printf("Enter decimal number: ");
    scanf("%d", &num);
 
    printf("Corresponding binary num: %d", decimalToBinary(num));
    
    return 0;
}
