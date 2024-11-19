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
    std::array<student_s_t, SIZE> students;
    size_t count;

public:
    Student() : count(0) {}
    void inputStudent();
    void printStudents() const;
    void updateGrade(int id, int newGrade);
};

#endif // STUDENT_H
