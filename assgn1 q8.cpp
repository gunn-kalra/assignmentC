#include <stdio.h>

void printPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printf("Pyramid:\n");
    printPyramid(rows);
    return 0;
}