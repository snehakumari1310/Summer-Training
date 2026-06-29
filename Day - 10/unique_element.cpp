#include <iostream>
#include <vector>
#include <set>
#include <utility> // Required for std::pair

int main() {
    // 1. Create a list of pairs with duplicate elements
    std::vector<std::pair<int, int>> initialPairs = {
        {1, 2}, {3, 4}, {1, 2}, {5, 6}, {3, 4}
    };

    // 2. Insert pairs into a std::set to filter duplicates
    std::set<std::pair<int, int>> uniquePairsSet;
    for (const auto& p : initialPairs) {
        uniquePairsSet.insert(p);
    }

    // 3. Print out the unique pairs
    std::cout << "Unique pairs using std::set:\n";
    for (const auto& p : uniquePairsSet) {
        std::cout << "(" << p.first << ", " << p.second << ")\n"; // Access elements with .first and .second
    }

    return 0;
}