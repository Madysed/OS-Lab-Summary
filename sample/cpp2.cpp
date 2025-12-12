#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Student {
    std::string firstName, lastName;
    int sid;
};

bool compareByFirst(const Student& a, const Student& b) { return a.firstName < b.firstName; }
bool compareByLast(const Student& a, const Student& b) { return a.lastName < b.lastName; }
bool compareBySID(const Student& a, const Student& b) { return a.sid < b.sid; }

int main() {
    std::vector<Student> students = {
        {"Alice", "Smith", 123},
        {"Bob", "Johnson", 456},
        // Add more via .push_back in code or group members
    };
    // Example: Add developer info
    students.push_back({"Developer1", "Last1", 789});

    // Sort by FirstName
    std::sort(students.begin(), students.end(), compareByFirst);
    std::cout << "Sorted by FirstName:\n";
    for (const auto& s : students) std::cout << s.firstName << " " << s.lastName << " " << s.sid << "\n";

    // Similarly for LastName and SID...
    return 0;
}