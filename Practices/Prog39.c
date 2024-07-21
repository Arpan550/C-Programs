#include <stdio.h>

int decimalToOctal(int num){
    int sum=0,pos=0, temp=0;
    int octal[32];

    while (num!=0){
        octal[pos++]=num%8;
        num/=8;
    }
    for(int i=pos-1;i>=0;i--){
        temp=temp*10+octal[i];
    }
    return temp;
}
int binaryToDecimal(int num){
    int temp=num, sum=0, pos=0;

    while(num!=0){
        int rem=num%10;
        sum+=rem*(1<<pos);
        pos++;
        num/=10;
    }
    return sum;
}
int binaryToOctal(int num){
    int temp=binaryToDecimal(num);
    int res=decimalToOctal(temp);
    return res;
}
int main() {
    int num;
    
    printf("Enter binary number: ");
    scanf("%d", &num);
 
    printf("Corresponding decimal num: %d", binaryToOctal(num));
    
    return 0;
}
