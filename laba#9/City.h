#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>

class City {
protected:
    std::string name;
    int population;

public:
    City(const std::string& name = "", int population = 0);
    virtual ~City();

    virtual void displayData() const;  // Віртуальний метод для виведення даних
    virtual void inputData();         // Віртуальний метод для введення даних

    // Гетери
    std::string getName() const;
    int getPopulation() const;

    // Сетери
    void setName(const std::string& name);
    void setPopulation(int population);
};

#endif

