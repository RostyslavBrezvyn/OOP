#ifndef INDUSTRIALCENTER_H
#define INDUSTRIALCENTER_H

#include "City.h"

class IndustrialCenter : public City {
private:
    std::string industryType;

public:
    IndustrialCenter(const std::string& n, Address addr, const std::string& type);
    void display() const override;
    void input() override;
};

#endif

