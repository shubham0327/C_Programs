#include <stdio.h>

// Function to split the array into three sub-arrays
void splitArray(int arr[], int size, int array1[], int *size1, int array2[], int *size2, int array3[], int *size3) {
    for (int i = 0; i < size; i++) {
        if (i % 3 == 0)
            array1[(*size1)++] = arr[i];
        else if (i % 3 == 1)
            array2[(*size2)++] = arr[i];
        else
            array3[(*size3)++] = arr[i];
    }
}

// Function to find and print pairs with sum 30
void findPairs(int arr[], int size) {
    printf("Pairs with sum 30:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == 30) {
                printf("%d + %d = 30\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {10, 5, 25, 15, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int array1[10], array2[10], array3[10];
    int size1 = 0, size2 = 0, size3 = 0;

    // Split the array into three sub-arrays
    splitArray(arr, size, array1, &size1, array2, &size2, array3, &size3);

    // Display the sub-arrays
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    printf("Array 3: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");

    // Find pairs with sum 30
    findPairs(arr, size);

    return 0;
}
