#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

struct Student {
    std::string name;
    std::vector<int> scores;
    double averageScore;
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.averageScore != s2.averageScore) {
        return s1.averageScore > s2.averageScore;
    }
    return s1.name < s2.name;
}

int main() {
    std::vector<Student> students;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        Student student;
        iss >> student.name;
        int score, sum = 0;
        while (iss >> score) {
            student.scores.push_back(score);
            sum += score;
        }
        student.averageScore = static_cast<double>(sum) / student.scores.size();
        if (student.averageScore >= 60) {
            students.push_back(student);
        }
    }

    std::sort(students.begin(), students.end(), compareStudents);

    int rank = 1;
    for (const auto& student : students) {
        std::cout << rank << " " << student.name << std::endl;
        rank++;
    }

    return 0;
}
