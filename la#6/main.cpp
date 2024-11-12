#include <iostream>
#include "student.h"

int main() {
    Exam exam;

    // Введення даних студентів
    exam.inputData();

    // Виведення результатів іспиту
    exam.displayData();

    return 0;
}

