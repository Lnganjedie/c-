#include <iostream>

int main() {
    const int size = 4;
    int originalArray[size] = {10, 20, 8, 5};
    int reversedArray[size];

    // Copy elements in reverse order
    for (int i = 0; i < size; ++i) {
        reversedArray[i] = originalArray[size - 1 - i];
    }

    // Display the reversed array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }

    std::cout << "\nReversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << reversedArray[i] << " ";
    }

    return 0;
}
