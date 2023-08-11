#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at a specified position in the array
int insert(int arr[], int size, int position, int value) {
    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
        return size;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;

    return size + 1;
}

// Function to delete an element from a specified position in the array
int deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.\n");
        return size;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

// Function to display the elements in the array
void display(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;

    display(arr, size);

    // Insert an element at position 2
    size = insert(arr, size, 2, 6);
    display(arr, size);

    // Delete the element at position 3
    size = deleteElement(arr, size, 3);
    display(arr, size);

    return 0;
}

