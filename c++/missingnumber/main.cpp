#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    int result = 0;

    // XOR all elements from both arrays
    for (int num : arr1) {
        result ^= num;
    }

    for (int num : arr2) {
        result ^= num;
    }

    return result;
}

int main() {
    std::vector<int> arr1 = {3, 1, 5, 7, 9};
    std::vector<int> arr2 = {3, 7, 5, 9};

    int missingNumber = findMissingNumber(arr1, arr2);

    std::cout << "Missing number: " << missingNumber << std::endl;

    return 0;
}

