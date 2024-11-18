#include <iostream>
#include <cmath> // Для використання математичних функцій

using namespace std;

// Функція для обчислення значення y
double calculate_y(double x, double a, double b) {
    return pow(1 + sqrt(a * x + b), 0.25) / (pow(sin(b * x), 2) + a);
}

// Функція для перевірки, чи значення y входить у межі [1, 3)
bool is_y_in_range(double y) {
    return y > 1 && y < 3;
}

// Функція для підрахунку суми та кількості значень y у діапазоні
void process_range(double x1, double x2, double h, double a, double b, double &sum, int &count) {
    for (double x = x1; x <= x2; x += h) {
        double y = calculate_y(x, a, b); // Обчислення y
        if (is_y_in_range(y)) {         // Перевірка, чи y входить у межі
            sum += y;                   // Додавання до суми
            count++;                    // Збільшення лічильника
        }
    }
}

int main() {
    // Початкові значення
    double x1 = 4.3;
    double x2 = 13.9;
    double h = 1.2;
    double a = 1.35;
    double b = 8.4;

    // Змінні для підрахунку суми та кількості y > 1
    double sum = 0;
    int count = 0;

    // Виклик функції для обробки діапазону
    process_range(x1, x2, h, a, b, sum, count);

    // Виведення результатів
    cout << "Сума значень 1 < y < 3: " << sum << endl;
    cout << "Кількість значень 1 < y < 3: " << count << endl;

    return 0;
}


  

    return 0; 

} 
