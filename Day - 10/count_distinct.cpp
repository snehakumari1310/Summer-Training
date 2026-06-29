#include <iostream>
#include <vector>
#include <set>
#include <utility> // Required for std::pair

int main() {
    // A vector containing duplicate pairs
    std::vector<std::pair<int, int>> pairs = {
        {1, 2}, {3, 4}, {1, 2}, {5, 6}, {3, 4}, {1, 2}
    };

    // Insert all pairs into a set
    std::set<std::pair<int, int>> distinct_pairs;
    for (const auto& p : pairs) {
        distinct_pairs.insert(p);
    }

    // The size of the set represents the count of distinct pairs
    std::cout << "Number of distinct pairs: " << distinct_pairs.size() << std::endl;

    // Optional: Print the distinct pairs
    std::cout << "The unique pairs are:\n";
    for (const auto& p : distinct_pairs) {
        std::cout << "(" << p.first << ", " << p.second << ")\n";
    }

    return 0;
}