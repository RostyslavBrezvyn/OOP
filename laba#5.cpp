#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    int ticketNumber;
    float grade;
    int year; // курс

public:
    // Конструктор за замовчуванням
    Student() : name(""), ticketNumber(0), grade(0.0), year(1) {}

    // Конструктор з параметрами
    Student(const std::string &name, int ticketNumber, float grade, int year) {
        setName(name);
        setTicketNumber(ticketNumber);
        setGrade(grade);
        setYear(year);
    }

    // Деструктор
    ~Student() {}

    // Методи для введення даних
    void setName(const std::string &name) {
        this->name = name;
    }

    void setTicketNumber(int ticketNumber) {
        if (ticketNumber > 0) {
            this->ticketNumber = ticketNumber;
        } else {
            std::cout << "Некоректний номер білета!" << std::endl;
        }
    }

    void setGrade(float grade) {
        if (grade >= 0.0 && grade <= 5.0) {
            this->grade = grade;
        } else {
            std::cout << "Некоректна оцінка! Введіть значення від 0 до 5." << std::endl;
        }
    }

    void setYear(int year) {
        if (year > 0 && year <= 5) {
            this->year = year;
        } else {
            std::cout << "Некоректний курс!" << std::endl;
        }
    }

    // Метод для виведення даних студента
    void display() const {
        std::cout << "Студент: " << name << ", Номер білета: " << ticketNumber
                  << ", Оцінка: " << grade << ", Курс: " << year << std::endl;
    }

    // Гетери для доступу до полів
    int getYear() const { return year; }
    float getGrade() const { return grade; }
};

int main() {
    std::vector<Student> students;

    // Створення екземплярів студентів
    students.emplace_back("John Doe", 1, 4.5, 2);
    students.emplace_back("Jane Smith", 2, 3.8, 1);
    students.emplace_back("Mike Brown", 3, 4.2, 2);
    students.emplace_back("Anna White", 4, 5.0, 3);

    // Виведення всіх студентів
    std::cout << "Список всіх студентів:\n";
    for (const auto &student : students) {
        student.display();
    }

    // Виведення студентів 2 курсу
    std::cout << "\nСтуденти 2 курсу:\n";
    bool found = false;
    for (const auto &student : students) {
        if (student.getYear() == 2) {
            student.display();
            found = true;
        }
    }
    if (!found) {
        std::cout << "Студентів 2 курсу не знайдено!" << std::endl;
    }

    // Виведення студентів із середнім балом вище 4
    std::cout << "\nСтуденти з середнім балом вище 4:\n";
    found = false;
    for (const auto &student : students) {
        if (student.getGrade() > 4.0) {
            student.display();
            found = true;
        }
    }
    if (!found) {
        std::cout << "Студентів з середнім балом вище 4 не знайдено!" << std::endl;
    }

    return 0;
}
