#include <stdio.h>

int decimalToBinary(int num){
    int temp=0, sum=0,pos=0;
    int binary[32];
    while(num!=0){
        binary[pos++]=num%2;
        num/=2;
    }
    for(int i=pos-1;i>=0;i--){
        temp=temp*10+binary[i];
    }
    return temp;
}
int octalToDecimal(int num){
    int temp=num, sum=0, pos=0;

    while(num!=0){
        int rem=num%10;
        sum+=rem*(1<<(3*pos));
        pos++;
        num/=10;
    }
    return sum;
}
int octalToBinary(int num){
    int temp=octalToDecimal(num);
    int ans=decimalToBinary(temp);
    return ans;
}
int main() {
    int num;
    
    printf("Enter octal number: ");
    scanf("%d", &num);
 
    printf("Corresponding Binary num: %d", octalToBinary(num));
    
    return 0;
}
