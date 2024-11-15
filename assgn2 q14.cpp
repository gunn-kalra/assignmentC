#include <stdio.h>

void printDuplicates(int arr[], int size) {
    int d = 0;//d is duplicates found
    printf("Duplicates: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                d = 1;
                break;  // Break to avoid multiple prints of the same duplicate
            }
        }
    }
   if (!d) {
        printf("no duplicates");
    }
    printf("\n");
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
    
    printDuplicates(arr, size);
    
    return 0;
}

