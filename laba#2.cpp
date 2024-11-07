#include <iostream> 
#include <cmath>  // Для використання математичних функцій 

using namespace std; 

  

int main() {   

    // Введення початкових та кінцевих значень     

    double x1 = 4.3; 

    double x2 = 13.9; 

    double h = 1.2; 

    double a = 1.35; 

    double b = 8.4; 

  

    // Змінні для підрахунку суми та кількості y > 1  

    double sum = 0; 

    int count = 0; 

  

    // Цикл для обчислення значень y для кожного x в інтервалі  

    for (double x = x1; x <= x2; x += h) { 

        double y = pow(1 + sqrt(a * x + b), 0.25) / (pow(sin(b * x), 2) + a);  // Обчислення y 

  

        if (y > 1 && y < 3) {  // Перевіряємо, чи y більше за 1 та менше за 3 

            sum += y; 

            count++; 

        } 

    } 

  

    // Виведення результатів  

    cout << "Сума значень 1 < y < 3: " << sum << endl; 

    cout << "Кількість значень 1 < y < 3: " << count << endl; 

  

    return 0; 

} 