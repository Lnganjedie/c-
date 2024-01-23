#include <iostream>

int main() {
    // Declare an array
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Initialize variables for sum and average
    int sum = 0;
    double average;

    // Calculate the sum of array elements
    for (int i = 0; i < arraySize; ++i) {
        sum += myArray[i];
    }

    // Calculate the average
    average = static_cast<double>(sum) / arraySize;

    // Display the sum and average
    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}
