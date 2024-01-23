#include <iostream>

int main() {
    // Declare an array
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    // Note: sizeof(myArray) gives the total size of the array in bytes
    //       sizeof(myArray[0]) gives the size of one element in the array
    //       The total size divided by the size of one element gives the number of elements
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Display the size of the array
    std::cout << "Size of the array: " << arraySize << std::endl;

    return 0;
}
