#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if a number can be expressed as the sum of two prime numbers
bool canBeExpressedAsSumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 4) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    } else {
        if (canBeExpressedAsSumOfTwoPrimes(num)) {
            printf("%d can be expressed as the sum of two prime numbers.\n", num);
        } else {
            printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
        }
    }
    
    return 0;
}
