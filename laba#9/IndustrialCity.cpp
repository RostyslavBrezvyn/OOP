#include "IndustrialCity.h"

// Конструктор
IndustrialCity::IndustrialCity(const std::string& name, int population, int factories) 
    : City(name, population), factories(factories) {}

// Деструктор
IndustrialCity::~IndustrialCity() {}

// Виведення даних
void IndustrialCity::displayData() const {
    City::displayData();
    std::cout << "Кількість заводів: " << factories << std::endl;
}

// Введення даних
void IndustrialCity::inputData() {
    City::inputData();
    std::cout << "Введіть кількість заводів: ";
    std::cin >> factories;
}

// Методи
int IndustrialCity::getFactories() const { return factories; }
void IndustrialCity::setFactories(int factories) { this->factories = factories; }

