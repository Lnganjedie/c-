#include <iostream>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }

    return count;
}

int main() {
    // Sorted array
    int sortedArray[] = {5, 7, 8, 8, 5, 8, 7, 7};

    // Number to find occurrences
    int targetNumber = 7;

    // Calculate the number of occurrences
    int occurrences = countOccurrences(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), targetNumber);

    // Display the result
    std::cout << "Number of occurrences of " << targetNumber << ": " << occurrences << std::endl;

    return 0;
}
