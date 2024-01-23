#include <iostream>
#include <vector>

std::vector<int> linearSearch(const std::vector<int>& arr, int key) {
    std::vector<int> indices;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);  // Element found at index i
        }
    }

    return indices;
}

int main() {
    int size;

    // Input array size from the user with validation
    do {
        std::cout << "Enter the size of the array: ";
        std::cin >> size;

        if (size <= 0) {
            std::cout << "Array size must be greater than 0. Please try again.\n";
        }
    } while (size <= 0);

    std::vector<int> arr(size);

    // Input array elements from the user
    std::cout << "Enter " << size << " array elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    // Input the number to search
    int key;
    std::cout << "Enter a number to search: ";
    std::cin >> key;

    // Perform linear search
    std::vector<int> indices = linearSearch(arr, key);

    // Display the result
    if (!indices.empty()) {
        std::cout << "Number " << key << " found at index(es): ";
        for (int index : indices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Number " << key << " not found in the array." << std::endl;
    }

    return 0;
}
