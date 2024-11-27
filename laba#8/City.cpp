#include "City.h"
#include <iostream>

City::City(string name, int population) : name(name), population(population) {}

City::~City() {}

void City::inputData() {
    cout << "Введіть назву міста: ";
    cin >> name;
    cout << "Введіть населення: ";
    cin >> population;
    if (population < 0) {
        cout << "Населення не може бути від'ємним. Встановлено значення 0." << endl;
        population = 0;
    }
}

void City::displayData() const {
    cout << "Місто: " << name << ", Населення: " << population << endl;
}
