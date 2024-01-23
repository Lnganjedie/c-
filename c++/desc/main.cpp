#include <iostream>
#include <algorithm>

int main() {
    const int size = 7;  // Adjust the size of the array as needed
    int arr[size] = {0, 9, 7, 2, 12, 11, 20};

    // Sorting the array in descending order
    std::sort(arr, arr + size, std::greater<int>());

    // Displaying the sorted array
    std::cout << "Array elements after rearrange: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
