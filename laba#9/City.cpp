#include "City.h"

// Конструктор
City::City(const std::string& name, int population) : name(name), population(population) {}

// Деструктор
City::~City() {}

// Виведення даних
void City::displayData() const {
    std::cout << "Місто: " << name << ", Населення: " << population << std::endl;
}

// Введення даних
void City::inputData() {
    std::cout << "Введіть назву міста: ";
    std::cin >> name;
    std::cout << "Введіть населення: ";
    std::cin >> population;
}

// Гетери
std::string City::getName() const { return name; }
int City::getPopulation() const { return population; }

// Сетери
void City::setName(const std::string& name) { this->name = name; }
void City::setPopulation(int population) { this->population = population; }

