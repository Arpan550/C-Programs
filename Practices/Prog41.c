#include <stdio.h>
#include <string.h>

void digitToWord(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
        default: printf("Invalid digit ");
    }
}

void numberToWords(int num) {
    if (num == 0) {
        digitToWord(0);
        return;
    }

    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        reversedNum = reversedNum * 10 + (num % 10);
        num /= 10;
    }

    while (reversedNum > 0) {
        int digit = reversedNum % 10;
        digitToWord(digit);
        reversedNum /= 10;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Minus ");
        num = -num;
    }

    printf("The number in words is: ");
    numberToWords(num);

    return 0;
}
