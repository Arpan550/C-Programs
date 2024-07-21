#include <stdio.h>

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
int main() {
    int num;
    
    printf("Enter binary number: ");
    scanf("%d", &num);
 
    printf("Corresponding decimal num: %d", binaryToDecimal(num));
    
    return 0;
}
