#include "IndustrialCenter.h"
#include <iostream>
using namespace std;

IndustrialCenter::IndustrialCenter(const std::string& n, Address addr, const std::string& type) 
    : City(n, addr), industryType(type) {}

void IndustrialCenter::display() const {
    cout << "Промисловий центр: " << name << ", Тип промисловості: " << industryType
         << ", Адреса: " << address.street << " " << address.number << endl;
}

void IndustrialCenter::input() {
    City::input();
    cout << "Введіть тип промисловості: ";
    cin >> industryType;
}

