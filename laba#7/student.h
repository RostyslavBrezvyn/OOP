#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

struct student_s_t {
    int id;               // ID студента
    std::string name;     // Ім'я студента
    int course;           // Номер курсу

    student_s_t(int student_id, const std::string& student_name, int student_course)
        : id(student_id), name(student_name), course(student_course) {}
};

class Student {
private:
    std::vector<student_s_t> students; // Список студентів

public:
    // Конструктор
    Student();

    // Деструктор
    ~Student();

    // Додавання студента в кінець
    void addStudent(int id, const std::string& name, int course);

    // Вставка студента в середину вектора
    void insertStudent(int index, int id, const std::string& name, int course);

    // Видалення студента за ID
    bool removeStudent(int id);

    // Оновлення курсу студента
    bool updateStudentCourse(int id, int new_course);

    // Обмін двох студентів
    bool swapStudents(int id1, int id2);

    // Виведення списку студентів
    void printStudents() const;

    // Очищення списку студентів
    void clearStudents();
};

#endif // STUDENT_H
