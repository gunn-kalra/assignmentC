#include <stdio.h>

void printPyramid(int rows) {
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf(" ");
        for (int j = 0; j <= i; j++) {
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
