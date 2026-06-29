#include <iostream>
#include <vector>
#include <unordered_map>

// Function to find the intersection of two arrays
std::vector<int> findIntersection(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::unordered_map<int, int> elementCounts;
    std::vector<int> intersectionResult;

    // Count frequencies of elements in the first array
    for (int num : arr1) {
        elementCounts[num]++;
    }

    // Check elements of the second array against the map
    for (int num : arr2) {
        // elementCounts contains std::pair<const int, int> elements
        auto it = elementCounts.find(num);
        
        // If element exists and its count is greater than 0
        if (it != elementCounts.end() && it->second > 0) {
            intersectionResult.push_back(num);
            it->second--; // Decrement count to handle duplicates correctly
        }
    }

    return intersectionResult;
}

int main() {
    std::vector<int> array1 = {1, 2, 2, 1, 4, 5};
    std::vector<int> array2 = {2, 2, 3, 5, 6};

    std::vector<int> result = findIntersection(array1, array2);

    // Print the intersection result
    std::cout << "Intersection of the two arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}