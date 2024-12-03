#include "Time.h"

Time::Time(int h, int m) : hours(h), minutes(m) {}

bool Time::operator>=(const Time& other) const {
    time_t t = time(0);
    struct tm* currentTime = localtime(&t);
    int currentHour = currentTime->tm_hour;
    int currentMinute = currentTime->tm_min;

    int currentTimeInMinutes = currentHour * 60 + currentMinute;
    int thisTimeInMinutes = hours * 60 + minutes;
    int otherTimeInMinutes = other.hours * 60 + other.minutes;

    return std::abs(currentTimeInMinutes - thisTimeInMinutes) >= std::abs(currentTimeInMinutes - otherTimeInMinutes);
}

Time& Time::operator+=(int minutesToAdd) {
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

void Time::display() const {
    std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << std::endl;
}

int Time::differenceFromCurrentTime() const {
    time_t t = time(0);
    struct tm* currentTime = localtime(&t);
    int currentHour = currentTime->tm_hour;
    int currentMinute = currentTime->tm_min;

    int currentTimeInMinutes = currentHour * 60 + currentMinute;
    int thisTimeInMinutes = hours * 60 + minutes;
    return std::abs(currentTimeInMinutes - thisTimeInMinutes);
}

