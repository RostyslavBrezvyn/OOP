#include "IndustrialCity.h"
#include <iostream>

IndustrialCity::IndustrialCity(string name, int population) : City(name, population) {}

void IndustrialCity::displayData() const {
    cout << "Промислове місто - ";
    City::displayData();
}
