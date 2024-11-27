#include <iostream>
#include <vector>
#include <limits>  // Додано для використання std::numeric_limits
#include "IndustrialCity.h"
#include "CulturalCity.h"

int main() {
    std::vector<City*> cities;
    std::string cityName;
    int population;

    // Введення для промислового міста
    std::cout << "Введіть дані для промислового міста:" << std::endl;
    std::cout << "Введіть назву міста: ";
    std::cin >> cityName;
    std::cout << "Введіть населення: ";
    while (!(std::cin >> population) || population < 0) { // Перевірка на валідність введення
        std::cout << "Некоректне населення. Введіть невід'ємне ціле число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cities.push_back(new IndustrialCity(cityName, population));

    // Введення для культурного міста
    std::cout << "\nВведіть дані для культурного міста:" << std::endl;
    std::cout << "Введіть назву міста: ";
    std::cin >> cityName;
    std::cout << "Введіть населення: ";
    while (!(std::cin >> population) || population < 0) { // Перевірка на валідність введення
        std::cout << "Некоректне населення. Введіть невід'ємне ціле число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cities.push_back(new CulturalCity(cityName, population));

    // Виведення даних про міста
    std::cout << "\nДані про міста:" << std::endl;
    for (City* city : cities) {
        city->displayData();
    }

    // Видалення створених об'єктів
    for (City* city : cities) {
        delete city;
    }

    return 0;
}
