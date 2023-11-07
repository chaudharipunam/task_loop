#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int count = 0; // Number of prime numbers found
    int i = 2; // Start from the first prime number
    int sum = 0; // Initialize the sum
    while (count < n) {
        if (isPrime(i)) {
            sum += i;
            count++;
        }
        i++;
    }
    printf("Sum of the first %d prime numbers is: %d\n", n, sum);
    return 0;
}
/*
// sum of prime numbers up to N numbers.................
#include <stdio.h>
int isPrime(int num){ //Defines a function 'isPrime' that checks if a given number is prime.
    if (num <= 1) {
        return 0; // If the number is less than or equal to 1, it's not prime; return 0.
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; //  If no divisors were found, the number is prime; return 1.
}
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;   //Calls the 'isPrime' function and if i is prime, adds it to the sum.
        }
    }
    printf("Sum of prime numbers up to %d is: %d\n", n, sum);
    return 0;
}

*/


