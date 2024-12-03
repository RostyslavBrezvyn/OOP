#include "Time.h"
#include <vector>
#include <algorithm>

int main() {
    std::vector<Time> times = {
        Time(5, 30),
        Time(12, 15),
        Time(9, 45),
        Time(16, 10)
    };

    // Виведення початкових часів
    std::cout << "Початкові години:\n";
    for (const auto& time : times) {
        time.display();
    }

    // Сортування за абсолютною різницею від поточного часу
    std::sort(times.begin(), times.end(), [](const Time& t1, const Time& t2) {
        return t1.differenceFromCurrentTime() > t2.differenceFromCurrentTime();
    });

    std::cout << "\nВідсортовані години (за спаданням різниці від поточного часу):\n";
    for (const auto& time : times) {
        time.display();
    }

    // Збільшення кожного часу на 30 хвилин
    int addMinutes = 30;
    for (auto& time : times) {
        time += addMinutes;
    }

    std::cout << "\nГодини після збільшення на 30 хвилин:\n";
    for (const auto& time : times) {
        time.display();
    }

    return 0;
}

