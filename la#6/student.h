#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <array>
#include <iostream>

const int SIZE = 3;  // Кількість студентів

// Структура для зберігання інформації про іспит студента
struct student_exam_t {
    std::string name;
    int ticketNumber;
    int grade;

    bool isValid() const {
        return !name.empty() && ticketNumber > 0 && grade >= 0 && grade <= 100;
    }
};

// Клас для управління інформацією про іспит
class Exam {
private:
    std::array<student_exam_t, SIZE> students;

public:
    // Конструктор
    Exam();

    // Деструктор
    ~Exam();

    // Метод для введення даних
    void inputData();

    // Метод для виведення даних
    void displayData() const;

    // Метод для перевірки валідності значень
    void validateInput(const student_exam_t &student) const;
};

#endif
