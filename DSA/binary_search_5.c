#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index if key is found
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Update the lower bound
        }
        else {
            high = mid - 1; // Update the upper bound
        }
    }

    return -1; // Return -1 if key is not found
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements into the array (in sorted order):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}