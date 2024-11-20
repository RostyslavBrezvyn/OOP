#ifndef INDUSTRIALCITY_H
#define INDUSTRIALCITY_H

#include "City.h"

class IndustrialCity : public City {
private:
    int factories;  // Кількість заводів

public:
    IndustrialCity(const std::string& name = "", int population = 0, int factories = 0);
    ~IndustrialCity();

    void displayData() const override; // Перевизначений метод
    void inputData() override;         // Перевизначений метод

    // Додаткові методи
    int getFactories() const;
    void setFactories(int factories);
};

#endif

