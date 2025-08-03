#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    int marks[3];

public:
    Student(std::string n, int m1, int m2, int m3) : name(n) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    float getAverage() const {
        return (marks[0] + marks[1] + marks[2]) / 3.0f;
    }

    char getGrade() const {
        float avg = getAverage();
        if (avg >= 90) return 'A';
        if (avg >= 75) return 'B';
        if (avg >= 60) return 'C';
        if (avg >= 50) return 'D';
        return 'F';
    }

    void saveToFile(std::ofstream& outFile) const {
        outFile << name << " " << marks[0] << " " << marks[1] << " " << marks[2] << "\n";
    }

    void display() const {
        std::cout << "Name: " << name
                  << "\nMarks: " << marks[0] << ", " << marks[1] << ", " << marks[2]
                  << "\nAverage: " << getAverage()
                  << "\nGrade: " << getGrade() << "\n\n";
    }
};

std::vector<Student> loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::vector<Student> students;
    std::string name;
    int m1, m2, m3;

    while (inFile >> name >> m1 >> m2 >> m3) {
        students.emplace_back(name, m1, m2, m3);
    }

    return students;
}

int main() {
    std::vector<Student> studentList;
    std::string filename = "student.txt";
    int choice;

    do {
        std::cout << "\n--- Student Grade System ---\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. View All Students\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            int m1, m2, m3;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter marks for 3 subjects: ";
            std::cin >> m1 >> m2 >> m3;

            Student s(name, m1, m2, m3);
            studentList.push_back(s);

            std::ofstream outFile(filename, std::ios::app);
            if (outFile.is_open()) {
                s.saveToFile(outFile);
                outFile.close();
            } else {
                std::cerr << "Error opening file for writing.\n";
            }

        } else if (choice == 2) {
            std::vector<Student> fileStudents = loadFromFile(filename);
            for (const auto& s : fileStudents) {
                s.display();
            }

        } else if (choice != 3) {
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
