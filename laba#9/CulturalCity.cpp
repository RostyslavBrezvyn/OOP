#include "CulturalCity.h"

// Конструктор
CulturalCity::CulturalCity(const std::string& name, int population, int museums) 
    : City(name, population), museums(museums) {}

// Деструктор
CulturalCity::~CulturalCity() {}

// Виведення даних
void CulturalCity::displayData() const {
    City::displayData();
    std::cout << "Кількість музеїв: " << museums << std::endl;
}

// Введення даних
void CulturalCity::inputData() {
    City::inputData();
    std::cout << "Введіть кількість музеїв: ";
    std::cin >> museums;
}

// Методи
int CulturalCity::getMuseums() const { return museums; }
void CulturalCity::setMuseums(int museums) { this->museums = museums; }

