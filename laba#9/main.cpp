#include "IndustrialCity.h"
#include "CulturalCity.h"
#include <vector>
#include <memory>

int main() {
    std::vector<City*> cities;

    // Додати промислове місто
    IndustrialCity* industrialCity = new IndustrialCity();
    industrialCity->inputData();
    cities.push_back(industrialCity);

    // Додати культурне місто
    CulturalCity* culturalCity = new CulturalCity();
    culturalCity->inputData();
    cities.push_back(culturalCity);

    // Вивести всі дані
    std::cout << "\nДані про міста:\n";
    for (const auto& city : cities) {
        city->displayData();
    }

    // Очистити пам'ять
    for (auto& city : cities) {
        delete city;
    }

    return 0;
}

