#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    // Separate even and odd numbers
    std::vector<int> result;
    for (int num : arr) {
        if (num % 2 == 0) {
            // Even numbers go first
            result.insert(result.begin(), num);
        } else {
            // Odd numbers go later
            result.push_back(num);
        }
    }

    // Display the result
    std::cout << "Array after divided: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
