#include "student.h"

// Конструктор
Student::Student() {}

// Деструктор
Student::~Student() {
    clearStudents();
}

// Додавання студента
void Student::addStudent(int id, const std::string& name, int course) {
    if (course <= 0 || course > 6) {
        std::cout << "Помилка: Невалідний номер курсу!" << std::endl;
        return;
    }
    students.emplace_back(id, name, course);
}

// Видалення студента за ID
bool Student::removeStudent(int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            return true;
        }
    }
    std::cout << "Студента з ID " << id << " не знайдено." << std::endl;
    return false;
}

// Оновлення курсу студента
bool Student::updateStudentCourse(int id, int new_course) {
    if (new_course <= 0 || new_course > 6) {
        std::cout << "Помилка: Невалідний номер курсу!" << std::endl;
        return false;
    }
    for (auto& student : students) {
        if (student.id == id) {
            student.course = new_course;
            return true;
        }
    }
    std::cout << "Студента з ID " << id << " не знайдено." << std::endl;
    return false;
}

// Виведення списку студентів
void Student::printStudents() const {
    if (students.empty()) {
        std::cout << "Список студентів порожній." << std::endl;
        return;
    }

    std::cout << "Список студентів:\n";
    for (const auto& student : students) {
        std::cout << "ID: " << student.id
                  << ", Ім'я: " << student.name
                  << ", Курс: " << student.course << std::endl;
    }
}

// Очищення списку студентів
void Student::clearStudents() {
    students.clear();
    std::cout << "Список студентів очищено." << std::endl;
}
