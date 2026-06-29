#include <iostream>
#include <vector>
#include <set>
#include <utility> // Required for std::pair

// Function to find the union of two arrays using std::pair
void findArrayUnion(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    // A set of pairs stores unique elements. 
    // Format: pair<Element_Value, Array_Identifier>
    std::set<std::pair<int, int>> unionSet;

    // Insert elements from the first array with tag 1
    for (int num : arr1) {
        unionSet.insert({num, 1});
    }

    // Insert elements from the second array with tag 2
    // If the exact same value already exists from array 1, it will NOT be overridden
    // If you want to log both occurrences, the unique pair tags allow both to exist
    for (int num : arr2) {
        unionSet.insert({num, 2});
    }

    // Print the unique elements and their source array
    std::cout << "Value\tSource Array\n";
    std::cout << "-------------------\n";
    for (const auto& p : unionSet) {
        std::cout << p.first << "\tArray " << p.second << "\n";
    }
}

int main() {
    std::vector<int> array1 = {5, 10, 15, 20};
    std::vector<int> array2 = {10, 20, 30, 40};

    std::cout << "Finding Union of Array 1 and Array 2:\n\n";
    findArrayUnion(array1, array2);

    return 0;
}