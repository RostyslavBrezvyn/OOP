#include <stdio.h>
#include <math.h>

// Функція для обчислення значення y
double calculate_y(double x, double a, double b) {
    if (x <= 0) {
        return exp(-x) + b; // e^(-x) + b
    } else if (x > 0 && x < 1) {
        double temp = a * a + 1 + x;
        if (temp > 0) {
            return pow(temp, 1.0 / 5.0); // (a^2 + 1 + x)^(1/5)
        } else {
            printf("Помилка: вираз a^2 + 1 + x <= 0\n");
            return NAN; // Повертаємо "нечисло" для помилки
        }
    } else {
        if (x >= 0) {
            return b + sqrt(x); // b + sqrt(x)
        } else {
            printf("Помилка: sqrt(x) для x < 0 неможливий\n");
            return NAN;
        }
    }
}

int main() {
    double x, a, b, y;

    // Введення параметрів a, b та змінної x
    printf("Введіть параметр a: ");
    scanf("%lf", &a);
    printf("Введіть параметр b: ");
    scanf("%lf", &b);
    printf("Введіть змінну x: ");
    scanf("%lf", &x);

    // Обчислення значення y
    y = calculate_y(x, a, b);

    // Виведення результату
    if (!isnan(y)) {
        printf("Результат: y = %.5f\n", y);
    } else {
        printf("Обчислення не виконано через помилку у вхідних даних.\n");
    }

    return 0;
}
