#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Exam {
private:
    string studentName;
    int ticketNumber;
    float grade;

public:
    // Метод для введення даних студента
    void inputData() {
        cout << "Введіть ім'я студента: ";
        getline(cin, studentName);
        cout << "Введіть номер білета: ";
        cin >> ticketNumber;
        cout << "Введіть оцінку: ";
        cin >> grade;
        cin.ignore(); // Очищення буфера після вводу числа
    }

    // Метод для виведення даних студента
    void printData() const {
        cout << "Ім'я студента: " << studentName 
             << "\nНомер білета: " << ticketNumber 
             << "\nОцінка: " << grade << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Створення екземплярів класу Exam
    Exam student1, student2, student3;

    // Введення даних для першого студента
    cout << "Введіть дані для першого студента:\n";
    student1.inputData();

    // Введення даних для другого студента
    cout << "\nВведіть дані для другого студента:\n";
    student2.inputData();

    // Введення даних для третього студента
    cout << "\nВведіть дані для третього студента:\n";
    student3.inputData();

    // Виведення даних про студентів
    cout << "\nДані першого студента:\n";
    student1.printData();

    cout << "\nДані другого студента:\n";
    student2.printData();

    cout << "\nДані третього студента:\n";
    student3.printData();

    return 0;
}
