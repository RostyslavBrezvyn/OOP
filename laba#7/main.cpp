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

    // Оновлення курсу студента
    std::cout << "\nОновлення курсу студента з ID 2:" << std::endl;
    group.updateStudentCourse(2, 4);

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

