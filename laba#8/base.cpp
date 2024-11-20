#include "Base.h"

Base::Base() : studentName("") {}

Base::Base(const string& name) : studentName(name) {}

void Base::setStudentName(const string& name) {
    studentName = name;
}

string Base::getStudentName() const {
    return studentName;
}

void Base::display() const {
    cout << "Student Name: " << studentName << endl;
}

