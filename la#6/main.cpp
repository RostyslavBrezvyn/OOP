#include "student.h"

int main() {
    Student group;
    int choice;

    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Додати студента\n2. Показати студентів\n3. Оновити оцінку\n0. Вийти\nВаш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            group.inputStudent();
            break;
        case 2:
            group.printStudents();
            break;
        case 3: {
            int id, grade;
            std::cout << "Введіть ID студента: ";
            std::cin >> id;
            std::cout << "Введіть нову оцінку: ";
            std::cin >> grade;
            group.updateGrade(id, grade);
            break;
        }
        case 0:
            std::cout << "Вихід з програми...\n";
            break;
        default:
            std::cout << "Некоректний вибір!\n";
        }
    } while (choice != 0);

    return 0;
}
