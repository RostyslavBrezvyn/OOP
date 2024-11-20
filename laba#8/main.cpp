#include <iostream>
#include <vector>
#include "Exam.h"

using namespace std;

int main() {
    vector<Exam> exams; // Динамічний масив для збереження об'єктів
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        int ticket;
        double grade;

        cout << "Enter student name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter ticket number: ";
        cin >> ticket;

        cout << "Enter grade: ";
        cin >> grade;

        try {
            Exam exam(name, ticket, grade);
            exams.push_back(exam);
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            --i; // Повторне введення для цього студента
        }
    }

    cout << "\nStudent Data:\n";
    for (const auto& exam : exams) {
        exam.display();
        cout << "----------------------\n";
    }

    return 0;
}

