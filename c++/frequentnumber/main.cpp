#include <iostream>
#include <unordered_map>
#include <vector>

int findMostFrequent(const std::vector<int>& arr) {
    std::unordered_map<int, int> frequencyMap;

    // Count occurrences of each number
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Find the most frequent number
    int mostFrequent = arr[0];  // Initialize with the first element
    int maxFrequency = frequencyMap[arr[0]];

    for (const auto& entry : frequencyMap) {
        if (entry.second > maxFrequency) {
            mostFrequent = entry.first;
            maxFrequency = entry.second;
        }
    }

    return mostFrequent;
}

int main() {
    std::vector<int> arr = {4, 5, 9, 12, 9, 22, 45, 7};

    int mostOccurredNumber = findMostFrequent(arr);

    std::cout << "Most occurred number: " << mostOccurredNumber << std::endl;

    return 0;
}
