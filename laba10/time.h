#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <cmath>
#include <ctime>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0);

    bool operator>=(const Time& other) const;
    Time& operator+=(int minutesToAdd);
    void display() const;
    int differenceFromCurrentTime() const;
};

#endif // TIME_H

