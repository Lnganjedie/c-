#include <iostream>
#include <algorithm>

int main() {
    const int size = 4;  // Adjust the size of the array as needed
    int arr[size] = {9, 122, 12, 1};

    // Sorting the array in ascending order
    std::sort(arr, arr + size);

    // Finding the second lowest number
    int secondLowest = arr[1];

    // Finding the highest and second highest numbers
    int highest = arr[size - 1];
    int secondHighest = arr[size - 2];

    // Displaying the results
    std::cout << "Second lowest number of the array: " << secondLowest << std::endl;
    std::cout << "Second highest number of the array: " << secondHighest << std::endl;

    return 0;
}
