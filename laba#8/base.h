#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>
using namespace std;

class Base {
protected:
    string studentName;

public:
    Base();
    Base(const string& name);
    void setStudentName(const string& name);
    string getStudentName() const;
    virtual void display() const; // Віртуальний метод для виводу
    virtual ~Base() = default;
};

#endif

