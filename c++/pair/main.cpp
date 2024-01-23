#include <iostream>
#include <unordered_set>
#include <vector>

void findPairsWithSum(const std::vector<int>& arr, int targetSum) {
    std::unordered_set<int> seenNumbers;

    std::cout << "Array pairs whose sum equal to " << targetSum << ":\n";

    for (int num : arr) {
        int complement = targetSum - num;

        if (seenNumbers.find(complement) != seenNumbers.end()) {
            // Found a pair with the specified sum
            std::cout << complement << "," << num << std::endl;
        }

        seenNumbers.insert(num);
    }
}

int countPairsWithSum(const std::vector<int>& arr, int targetSum) {
    std::unordered_set<int> seenNumbers;
    int count = 0;

    for (int num : arr) {
        int complement = targetSum - num;

        if (seenNumbers.find(complement) != seenNumbers.end()) {
            // Found a pair with the specified sum
            count++;
        }

        seenNumbers.insert(num);
    }

    return count;
}

int main() {
    std::vector<int> arr = {1, 5, 7, 5, 8, 9, 11, 12};
    int targetSum = 12;

    findPairsWithSum(arr, targetSum);

    int numberOfPairs = countPairsWithSum(arr, targetSum);

    std::cout << "Number of pairs whose sum equal to " << targetSum << ": " << numberOfPairs << std::endl;

    return 0;
}
