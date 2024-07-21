#include <stdio.h>
#include <math.h>

int isAutomorphic(int num) {
    int square = num * num;
    int temp = num;
    
    int numDigits = 0;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    int divisor = pow(10, numDigits);
    if (square % divisor == num) {
        return 1; 
    }
    return 0; 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAutomorphic(num)) {
        printf("%d is an automorphic number(curious).\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}
