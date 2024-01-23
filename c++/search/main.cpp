#include <iostream>
#include <algorithm>

int binarySearch(const int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Element found at index mid
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    const int size = 10;
    int arr[size];

    // Input array elements from the user
    std::cout << "Enter 10 elements for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    // Sort the array (binary search requires a sorted array)
    std::sort(arr, arr + size);

    // Input the number to search
    int key;
    std::cout << "Enter a number to search: ";
    std::cin >> key;

    // Perform binary search
    int index = binarySearch(arr, size, key);

    // Display the result
    if (index != -1) {
        std::cout << "Number " << key << " found at index " << index << std::endl;
    } else {
        std::cout << "Number " << key << " not found in the array." << std::endl;
    }

    return 0;
}
