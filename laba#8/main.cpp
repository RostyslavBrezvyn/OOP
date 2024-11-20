#include <iostream>
#include <vector>
#include "IndustrialCity.h"
#include "CulturalCity.h"

int main() {
    vector<City*> cities;

    cities.push_back(new IndustrialCity("Kharkiv", 1500000));
    cities.push_back(new CulturalCity("Lviv", 800000));

    for (City* city : cities) {
        city->displayData();
    }

    for (City* city : cities) {
        delete city;
    }

    return 0;
}
