#include <iostream>
#include <algorithm>  // For std::sort

int main() {
    // Define an array
    int arr[] = {12, 45, 23, 51, 19, 8, 34};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in the array

    // Sort the array in ascending order
    std::sort(arr, arr + n);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
