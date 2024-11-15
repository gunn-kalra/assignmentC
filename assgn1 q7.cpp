#include <stdio.h>
#include <math.h>

// Function to convert Binary to Decimal
int binaryToDecimal(int n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

// Function to convert Decimal to Binary
int decimalToBinary(int n) {
    int binary = 0, i = 1, remainder;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice, number;
    
    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("Decimal equivalent: %d\n", binaryToDecimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("Binary equivalent: %d\n", decimalToBinary(number));
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
