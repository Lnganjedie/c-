#include <iostream>
#include <vector>

void updateArray(std::vector<int>& arr) {
    if (arr.size() <= 1) {
        // Nothing to update for arrays with 0 or 1 element
        return;
    }

    // Update the first element
    arr[0] *= arr[1];

    // Update the middle elements
    for (size_t i = 1; i < arr.size() - 1; ++i) {
        arr[i] *= arr[i - 1] * arr[i + 1];
    }

    // Update the last element
    arr[arr.size() - 1] *= arr[arr.size() - 2];
}

int main() {
    std::vector<int> arr = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    // Update the array
    updateArray(arr);

    std::cout << "\nNew array elements: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
