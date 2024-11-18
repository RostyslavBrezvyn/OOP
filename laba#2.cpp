#include <stdio.h>
#include <math.h>

// Функція для обчислення значення y
double calculate_y(double x, double a, double b) {
    if (x <= 0) {
        return exp(-x) + b; // e^(-x) + b
    } else if (x > 0 && x < 1) {
        return pow(a * a + 1 + x, 1.0 / 5.0); // (a^2 + 1 + x)^(1/5)
    } else {
        return b + sqrt(x); // b + sqrt(x)
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
    printf("Результат: y = %.5f\n", y);

    return 0;
}
