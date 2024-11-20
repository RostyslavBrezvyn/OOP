#include "City.h"
#include <iostream>

City::City(string name, int population) : name(name), population(population) {}

City::~City() {}

void City::inputData() {
    cout << "Enter city name: ";
    cin >> name;
    cout << "Enter population: ";
    cin >> population;
    if (population < 0) {
        cout << "Population cannot be negative. Setting to 0." << endl;
        population = 0;
    }
}

void City::displayData() const {
    cout << "City: " << name << ", Population: " << population << endl;
}

