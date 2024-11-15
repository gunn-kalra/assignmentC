#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
    return 0;
    for (int i = 2; i <= num ; i++) {
        if (num % i == 0) return 1;
    }
    return 0;
}

// Function to count prime numbers in an array
int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int i=0,n;
    printf("Enter no of elements");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element  %d\n",i);
        scanf("%d",&arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int primeCount = countPrimes(arr, size);
    
    printf("Number of prime numbers in the array: %d\n", primeCount);
    return 0;
}

