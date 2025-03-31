#include<stdio.h>
#include<math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it is not prime
        }
    }
    return 1; // num is prime
}

int main() {
    int n, arr[100], count = 0;

    // Input the size of the array
    scanf("%d", &n);

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each number in the array if it is prime
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++; // Increment count if the number is prime
        }
    }

    // Output the count of prime numbers
    printf("%d", count);

    return 0;
}

