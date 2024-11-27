#ifndef CULTURALCITY_H
#define CULTURALCITY_H

#include "City.h"

class CulturalCity : public City {
public:
    CulturalCity(string name, int population);
    void displayData() const override;
};

#endif
