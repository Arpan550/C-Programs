#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

// Function to find the number of integers with exactly 9 divisors
int countNumbersWith9Divisors(int limit) {
    int count = 0;
    
    // Check for numbers of the form p^8
    for (int i = 2; i <= pow(limit, 1.0/8); i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    
    // Check for numbers of the form p^2 * q^2
    for (int i = 2; i <= sqrt(limit); i++) {
        if (isPrime(i)) {
            for (int j = i + 1; j <= sqrt(limit); j++) {
                if (isPrime(j) && (i * i * j * j <= limit)) {
                    count++;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    int result = countNumbersWith9Divisors(limit);
    printf("Number of integers with exactly 9 divisors up to %d: %d\n", limit, result);

    return 0;
}
