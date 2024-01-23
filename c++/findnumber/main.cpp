#include <iostream>

int linearSearch(const int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;  // Element found at index i
        }
    }
    return -1;  // Element not found
}

int main() {
    const int size = 10;
    int arr[size];

    // Input array elements from the user
    std::cout << "Enter 10 numbers as array elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    // Input the number to search
    int key;
    std::cout << "Enter a number to search: ";
    std::cin >> key;

    // Perform linear search
    int index = linearSearch(arr, size, key);

    // Display the result
    if (index != -1) {
        std::cout << "Number " << key << " found at index " << index << std::endl;
    } else {
        std::cout << "Number " << key << " not found in the array." << std::endl;
    }

    return 0;
}
