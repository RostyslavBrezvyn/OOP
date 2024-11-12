#include "student.h"

// Конструктор
Exam::Exam() {
    std::cout << "Конструктор класу Exam викликано." << std::endl;
}

// Деструктор
Exam::~Exam() {
    std::cout << "Деструктор класу Exam викликано." << std::endl;
}

// Метод для введення даних
void Exam::inputData() {
    for (int i = 0; i < SIZE; ++i) {
        student_exam_t student;

        std::cout << "Введіть ім'я студента: ";
        std::cin.ignore();
        std::getline(std::cin, student.name);

        std::cout << "Введіть номер білета: ";
        std::cin >> student.ticketNumber;

        std::cout << "Введіть оцінку (0-100): ";
        std::cin >> student.grade;

        validateInput(student);
        students[i] = student;
    }
}

// Метод для виведення даних
void Exam::displayData() const {
    std::cout << "\nРезультати іспиту:\n";
    for (const auto& student : students) {
        if (student.isValid()) {
            std::cout << "Ім'я: " << student.name
                      << ", Номер білета: " << student.ticketNumber
                      << ", Оцінка: " << student.grade << std::endl;
        } else {
            std::cout << "Некоректні дані для одного зі студентів.\n";
        }
    }
}

// Метод для перевірки валідності даних
void Exam::validateInput(const student_exam_t &student) const {
    if (!student.isValid()) {
        std::cerr << "Помилка: Некоректні дані (оцінка повинна бути 0-100, номер білета > 0).\n";
    }
}
