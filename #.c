#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }

    return true; // num is prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
