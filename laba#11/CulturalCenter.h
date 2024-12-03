#ifndef CULTURALCENTER_H
#define CULTURALCENTER_H

#include "City.h"

class CulturalCenter : public City {
private:
    std::string culturalType;

public:
    CulturalCenter(const std::string& n, Address addr, const std::string& type);
    void display() const override;
    void input() override;
};

#endif

