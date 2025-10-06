#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using for loop:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nArray elements using while loop:\n");
    int j = 0;
    while (j < n) {
        printf("%d ", arr[j]);
        j++;
    }

    printf("\n\nArray elements in reverse order:\n");
    for (int k = n - 1; k >= 0; k--) {
        printf("%d ", arr[k]);
    }

    return 0;
}