#include "City.h"
#include <iostream>
using namespace std;

City::City(const std::string& n, Address addr) : name(n), address(addr) {}

void City::display() const {
    cout << "Місто: " << name << ", Адреса: " << address.street << " " << address.number << endl;
}

void City::input() {
    cout << "Введіть назву міста: ";
    cin >> name;
    cout << "Введіть вулицю: ";
    cin >> address.street;
    cout << "Введіть номер будинку: ";
    cin >> address.number;
}

