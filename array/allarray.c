#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} userArray;

void initArray(userArray *arr, int capacity) {
    arr->data = (int *)malloc(capacity * sizeof(int));
    arr->size = 0;
    arr->capacity = capacity;
}

void insert(userArray *arr, int val) {
    if (arr->size < arr->capacity) {
        arr->data[arr->size++] = val;
    } else {
        printf("Array is full!\n");
    }
}

void deleteArray(userArray *arr, int index) {
    if (index < 0 || index >= arr->size) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < arr->size - 1; i++) {
        arr->data[i] = arr->data[i + 1];
    }
    arr->size--;
}

int SearchArray(userArray arr, int val) {
    for (int i = 0; i < arr.size; i++) {
        if (arr.data[i] == val)
            return i;
    }
    return -1;
}

void display(userArray arr) {
    printf("Array elements: ");
    for (int i = 0; i < arr.size; i++) {
        printf("%d ", arr.data[i]);
    }
    printf("\n");
}

void freeArray(userArray *arr) {
    free(arr->data);
}

int main() {
    userArray arr;
    int capacity, val, choice, index;

    printf("Enter array capacity: ");
    scanf("%d", &capacity);

    initArray(&arr, capacity);

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nChoose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(&arr, val);
                break;

            case 2:
                printf("Enter index to delete element: ");
                scanf("%d", &index);
                deleteArray(&arr, index);
                break;

            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &val);
                index = SearchArray(arr, val);
                if (index != -1)
                    printf("Found at index %d\n", index);
                else
                    printf("Not found\n");
                break;

            case 4:
                display(arr);
                break;

            case 5:
                freeArray(&arr);
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}