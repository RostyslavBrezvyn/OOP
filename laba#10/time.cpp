#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Оператор порівняння >= для порівняння часу за різницею від поточного часу
    bool operator>=(const Time& other) const {
        // Отримуємо поточний час
        time_t t = time(0);
        struct tm* currentTime = localtime(&t);
        int currentHour = currentTime->tm_hour;
        int currentMinute = currentTime->tm_min;

        // Обчислюємо різницю між поточним часом і часом у об'єкті
        int currentTimeInMinutes = currentHour * 60 + currentMinute;
        int thisTimeInMinutes = hours * 60 + minutes;
        int otherTimeInMinutes = other.hours * 60 + other.minutes;

        // Порівнюємо за різницею від поточного часу
        return std::abs(currentTimeInMinutes - thisTimeInMinutes) >= std::abs(currentTimeInMinutes - otherTimeInMinutes);
    }

    // Оператор збільшення на n хвилин
    Time& operator+=(int minutesToAdd) {
        minutes += minutesToAdd;
        while (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
        while (minutes < 0) {
            minutes += 60;
            hours--;
        }
        return *this;
    }

    // Функція для виведення часу
    void display() const {
        std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << std::endl;
    }

    // Функція для отримання різниці в хвилинах від поточного часу
    int differenceFromCurrentTime() const {
        time_t t = time(0);
        struct tm* currentTime = localtime(&t);
        int currentHour = currentTime->tm_hour;
        int currentMinute = currentTime->tm_min;

        int currentTimeInMinutes = currentHour * 60 + currentMinute;
        int thisTimeInMinutes = hours * 60 + minutes;
        return std::abs(currentTimeInMinutes - thisTimeInMinutes);
    }
};

int main() {
    std::vector<Time> times = {
        Time(5, 30),
        Time(12, 15),
        Time(9, 45),
        Time(16, 10)
    };

    // Виведення початкових часів
    std::cout << "Початкові  години:\n";
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

