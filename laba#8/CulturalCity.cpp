#include "CulturalCity.h"
#include <iostream>

CulturalCity::CulturalCity(string name, int population) : City(name, population) {}

void CulturalCity::displayData() const {
    cout << "Cultural City - ";
    City::displayData();
}

