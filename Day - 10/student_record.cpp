#include <iostream>
#include <vector>
#include <string>
#include <utility> // Required for std::pair and std::make_pair

int main() {
    // 1. Single Student Record: pair<Roll_Number, Student_Name>
    std::pair<int, std::string> singleStudent = {101, "Alice Smith"};
    
    std::cout << "--- Single Student Record ---" << std::endl;
    std::cout << "Roll No: " << singleStudent.first << ", Name: " << singleStudent.second << std::endl << std::endl;

    // 2. Database of Multiple Students using a Vector of Pairs
    std::vector<std::pair<int, std::string>> studentDatabase;

    // Adding records using different initialization methods
    studentDatabase.push_back({102, "Bob Jones"}); 
    studentDatabase.push_back(std::make_pair(103, "Charlie Brown"));
    studentDatabase.push_back(std::make_pair(104, "Diana Prince"));

    // 3. Displaying all student records from the database
    std::cout << "--- Student Database Records ---" << std::endl;
    for (const auto& student : studentDatabase) {
        std::cout << "Roll No: " << student.first << " | Name: " << student.second << std::endl;
    }

    // 4. Advanced: Nesting pairs to store three fields (Roll No, Name, GPA)
    // pair< Roll_No, pair<Name, GPA> >
    std::pair<int, std::pair<std::string, double>> detailedStudent = {105, {"Evan Wright", 3.91}};

    std::cout << "\n--- Detailed Student Record (Nested Pair) ---" << std::endl;
    std::cout << "Roll No: " << detailedStudent.first 
              << ", Name: " << detailedStudent.second.first 
              << ", GPA: " << detailedStudent.second.second << std::endl;

    return 0;
}