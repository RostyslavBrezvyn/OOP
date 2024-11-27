#ifndef STUDENT_H
#define STUDENT_H

#include <array>
#include <string>
#include <iostream>

const size_t SIZE = 100;

struct student_s_t {
    int id;
    std::string name;
    int course;
    int grade;
};

class Student {
private:
    std::array<student_s_t, SIZE> students; // Масив студентів
    size_t count;                          // Лічильник студентів

public:
    Student() : count(0) {}

    void inputStudent();                  // Метод для додавання студента
    void printStudents() const;           // Метод для виведення студентів
    void updateGrade(int id, int newGrade); // Метод для оновлення оцінки
};

#endif // STUDENT_H
