#ifndef CULTURALCITY_H
#define CULTURALCITY_H

#include "City.h"

class CulturalCity : public City {
private:
    int museums;  // Кількість музеїв

public:
    CulturalCity(const std::string& name = "", int population = 0, int museums = 0);
    ~CulturalCity();

    void displayData() const override; // Перевизначений метод
    void inputData() override;         // Перевизначений метод

    // Додаткові методи
    int getMuseums() const;
    void setMuseums(int museums);
};

#endif

