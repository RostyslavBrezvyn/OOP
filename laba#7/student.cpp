#include "student.h"

int main() {
    Student group;

    // Додавання студентів
    group.addStudent(1, "Нестор Руслан", 1);
    group.addStudent(2, "Брезвин Ростислав", 3);
    group.addStudent(3, "Савчак Роман", 2);

    // Виведення списку
    std::cout << "\nПоточний список студентів:" << std::endl;
    group.printStudents();

    // Вставка студента в середину вектора
    std::cout << "\nВставка студента в середину списку (ID: 4) на позицію 1:" << std::endl;
    group.insertStudent(1, 4, "Олексій Іванов", 2);
    group.printStudents();

    // Оновлення курсу студента
    std::cout << "\nОновлення курсу студента з ID 2:" << std::endl;
    group.updateStudentCourse(2, 4);

    // Обмін двох студентів
    std::cout << "\nОбмін місцями студентів з ID 2 і 4:" << std::endl;
    group.swapStudents(2, 4);
    group.printStudents();

    // Видалення студента
    std::cout << "\nВидалення студента з ID 1:" << std::endl;
    group.removeStudent(1);

    // Виведення оновленого списку
    std::cout << "\nОновлений список студентів:" << std::endl;
    group.printStudents();

    // Очищення списку студентів
    std::cout << "\nОчищення списку студентів:" << std::endl;
    group.clearStudents();

    return 0;
}
