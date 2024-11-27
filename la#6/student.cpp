#include "student.h"

void Student::inputStudent() {
    if (count >= SIZE) {
        std::cout << "Досягнуто максимальну кількість студентів!\n";
        return;
    }

    student_s_t s;

    std::cout << "Введіть ID: ";
    std::cin >> s.id;

    std::cout << "Введіть ім'я: ";
    std::cin.ignore(); // Очищаємо буфер перед зчитуванням
    std::getline(std::cin, s.name);
    if (s.name.empty()) {
        std::cout << "Ім'я не може бути порожнім! Спробуйте ще раз.\n";
        return;
    }

    std::cout << "Введіть курс (1-4): ";
    std::cin >> s.course;
    if (s.course < 1 || s.course > 4) {
        std::cout << "Некоректний курс! Курс має бути від 1 до 4.\n";
        return;
    }

    std::cout << "Введіть оцінку (0-100): ";
    std::cin >> s.grade;
    if (s.grade < 0 || s.grade > 100) {
        std::cout << "Некоректна оцінка! Оцінка має бути в діапазоні 0-100.\n";
        return;
    }

    students[count++] = s;
    std::cout << "Студента успішно додано!\n";
}

void Student::printStudents() const {
    if (count == 0) {
        std::cout << "Список студентів порожній!\n";
        return;
    }

    for (size_t i = 0; i < count; i++) {
        std::cout << "ID: " << students[i].id
                  << ", Ім'я: " << students[i].name
                  << ", Курс: " << students[i].course
                  << ", Оцінка: " << students[i].grade << '\n';
    }
}

void Student::updateGrade(int id, int newGrade) {
    if (newGrade < 0 || newGrade > 100) {
        std::cout << "Некоректна оцінка! Оцінка має бути в діапазоні 0-100.\n";
        return;
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
