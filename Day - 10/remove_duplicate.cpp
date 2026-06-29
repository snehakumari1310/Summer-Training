#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main() {
    // Vector containing duplicate pairs
    std::vector<std::pair<int, std::string>> vec = {
        {1, "Apple"}, {2, "Banana"}, {1, "Apple"}, 
        {3, "Cherry"}, {2, "Banana"}, {1, "Orange"}
    };

    // 1. Sort the vector (pairs are compared by .first, then by .second)
    std::sort(vec.begin(), vec.end());

    // 2. std::unique moves duplicates to the end and returns a new end iterator
    auto it = std::unique(vec.begin(), vec.end());

    // 3. Erase the trailing duplicate elements
    vec.erase(it, vec.end());

    // Display the unique pairs
    for (const auto& p : vec) {
        std::cout << "{" << p.first << ", " << p.second << "}\n";
    }

    return 0;
}