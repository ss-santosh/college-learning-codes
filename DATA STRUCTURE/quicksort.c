#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
// Function to partition the array
int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]); // Place the pivot in the correct position
    return (i + 1);
}
// QuickSort function
void quicksort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}
// Function to print the array
void printarray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]); // Added space for readability
    }
    printf("\n");
}

// Main function
int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Unsorted array:\n");
    printarray(data, n);
    quicksort(data, 0, n - 1);
    printf("Sorted array in ascending order:\n");
    printarray(data, n);
    return 0;
}
