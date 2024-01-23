#include <iostream>
#include <vector>
#include <algorithm>

void findLargestThree(const std::vector<int>& arr) {
    if (arr.size() < 3) {
        std::cerr << "Array should have at least three elements." << std::endl;
        return;
    }

    // Create a copy of the array
    std::vector<int> sortedArray = arr;

    // Sort the array in descending order
    std::sort(sortedArray.begin(), sortedArray.end(), std::greater<int>());

    // Display the three largest elements
    std::cout << "Three largest elements are: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << sortedArray[i];
        if (i < 2) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {7, 12, 9, 15, 19, 32, 56, 70};

    std::cout << "Given array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    findLargestThree(arr);

    return 0;
}

