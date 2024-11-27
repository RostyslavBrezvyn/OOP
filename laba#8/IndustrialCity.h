#ifndef INDUSTRIALCITY_H
#define INDUSTRIALCITY_H

#include "City.h"

class IndustrialCity : public City {
public:
    IndustrialCity(string name, int population);
    void displayData() const override;
};

#endif
