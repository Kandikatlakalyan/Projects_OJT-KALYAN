#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1)
        return 0;
    if (num <= 3)
        return 1;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s pth qth\n", argv[0]);
        return 1;
    }
    
    int pth = atoi(argv[1]);
    int qth = atoi(argv[2]);
    
    if (pth <= 0 || qth <= 0) {
        printf("Position arguments (pth and qth) must be positive integers.\n");
        return 1;
    }

    int primes[10000]; // Assuming a maximum of 10000 prime numbers
    int num = 2;
    int count = 0;

    while (count < pth || count < qth) {
        if (is_prime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }

    printf("The prime number at position %d is: %d\n", pth, primes[pth - 1]);
    printf("The prime number at position %d is: %d\n", qth, primes[qth - 1]);

    return 0;
}
