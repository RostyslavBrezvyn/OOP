#include "student.h"

void Student::inputStudent() {
    if (count >= SIZE) return;

    student_s_t s;
    std::cout << "Введіть ID: "; std::cin >> s.id;
    std::cout << "Введіть ім'я: "; std::cin.ignore(); std::getline(std::cin, s.name);
    std::cout << "Введіть курс: "; std::cin >> s.course;
    std::cout << "Введіть оцінку: "; std::cin >> s.grade;

    if (s.grade < 0 || s.grade > 100) {
        std::cout << "Некоректна оцінка!\n"; return;
    }
    students[count++] = s;
}

void Student::printStudents() const {
    for (size_t i = 0; i < count; i++) {
        std::cout << "ID: " << students[i].id
                  << ", Ім'я: " << students[i].name
                  << ", Курс: " << students[i].course
                  << ", Оцінка: " << students[i].grade << '\n';
    }
}

void Student::updateGrade(int id, int newGrade) {
    if (newGrade < 0 || newGrade > 100) {
        std::cout << "Некоректна оцінка!\n"; return;
    }
    for (size_t i = 0; i < count; i++) {
        if (students[i].id == id) {
            students[i].grade = newGrade;
            std::cout << "Оцінка оновлена.\n";
            return;
        }
    }
    std::cout << "Студента з таким ID не знайдено!\n";
}
