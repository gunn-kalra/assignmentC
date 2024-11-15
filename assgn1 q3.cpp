#include <stdio.h>

// Function to subtract 2nd number from first using bitwise operators
int subtract(int a, int b) {
    return a + (~b + 1);
}

int main() {
    int x = 5;
    int y = 4;
    
    int result = subtract(x, y);
    printf("Subtraction of %d and %d is: %d\n", x, y, result);
    
    return 0;
}
