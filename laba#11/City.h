#ifndef CITY_H
#define CITY_H

#include <string>
#include "Address.h"

class City {
protected:
    std::string name;
    Address address;

public:
    City(const std::string& n, Address addr);
    virtual ~City() {}
    virtual void display() const;
    virtual void input();
};

#endif

