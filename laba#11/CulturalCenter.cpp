#include "CulturalCenter.h"
#include <iostream>
using namespace std;

CulturalCenter::CulturalCenter(const std::string& n, Address addr, const std::string& type) 
    : City(n, addr), culturalType(type) {}

void CulturalCenter::display() const {
    cout << "Культурний центр: " << name << ", Тип культури: " << culturalType
         << ", Адреса: " << address.street << " " << address.number << endl;
}

void CulturalCenter::input() {
    City::input();
    cout << "Введіть тип культури: ";
    cin >> culturalType;
}

