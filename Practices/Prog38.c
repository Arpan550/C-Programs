#include <stdio.h>

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
int main() {
    int num;
    
    printf("Enter octal number: ");
    scanf("%d", &num);
 
    printf("Corresponding decimal num: %d", octalToDecimal(num));
    
    return 0;
}
